from re import A
from webapp import app
from webapp import db
from flask import render_template, request, jsonify, redirect, url_for, flash
from flask_login import current_user, login_user, logout_user, login_required
from werkzeug.urls import url_parse
from webapp.forms import AddEmployeeForm, AddDoorForm, ConfirmForm, EditEmployeeForm, EditDoorForm, LoginForm, RegistrationForm
from webapp.db_models import Door, User, Access, Employee


@app.route('/')
@app.route('/index')
@login_required
def index():
    accesses = Access.query.all()
    return render_template("index.html", title="Home page", accesses=accesses)


@app.route('/login', methods=['GET', 'POST'])
def login():
    if current_user.is_authenticated:  # If the current user from flask_login is authenticated
        return redirect(url_for('index'))
    # What I did here is import the LoginForm class from forms.py, instantiated an object from it, and sent it down to the template
    form = LoginForm()
    if form.validate_on_submit():  # If the form is validated
        # Get the user with the name that was introduced in the form
        user = User.query.filter_by(username=form.username.data).first()
        # Check if there was an User introduced or if the password was not correct
        if user is None or not user.check_password(form.password.data):
            # If the password was NOT correct, flash a message and redirect again to login
            flash('Invalid username or password')
            return redirect(url_for('login'))
        # If the password WAS correct, login the user and redirect to index
        # login_user also gives a value to the variable current_user
        login_user(user, remember=form.remember_me.data)
        # Next page is used for redirecting to a page that has the @login_required
        # This line gets the next query from an url like:       /login?next=/index
        next_page = request.args.get('next')
        # If there is not a next page OR if the page that is being redirected is not a page within my website (for example, an external malicious website).
        # For that purpose, netloc from werkzeug.urls is used
        if not next_page or url_parse(next_page).netloc != '':
            next_page = url_for('index')
        return redirect(url_for('index'))
    return render_template('login.html', title='Sign In', form=form)


@app.route('/logout')
def logout():
    logout_user()
    return redirect(url_for('index'))


@app.route('/register', methods=['GET', 'POST'])
def register():
    if current_user.is_authenticated:
        return redirect(url_for('index'))
    form = RegistrationForm()
    if form.validate_on_submit():
        user = User(username=form.username.data, email=form.email.data)
        user.set_password(form.password.data)
        db.session.add(user)
        db.session.commit()
        flash('Congratulations, you are now a registered user!')
        return redirect(url_for('login'))
    return render_template('register.html', title='Register', form=form)


@app.route('/add_employee', methods=['GET', 'POST'])
def add_employee():
    form = AddEmployeeForm()
    if form.validate_on_submit():
        employee = Employee(
            name=form.name.data,
            dni=form.dni.data,
            access_level=form.access_level.data,
            rfid=form.rfid.data
        )
        db.session.add(employee)
        db.session.commit()
        flash(f'Agregado al employee {form.name.data}')
        return redirect(url_for('add_employee'))
    return render_template('add_employee.html', title='Añadir Employee', form=form)


@app.route('/add_door/', methods=['GET', 'POST'])
def add_door():
    form = AddDoorForm()
    if form.validate_on_submit():
        door = Door(
            security_level=form.security_level.data,
            note=form.note.data
        )
        db.session.add(door)
        db.session.commit()
        flash(
            f'Agregada la door con la note {form.note.data}, y el nivel de seguridad {form.security_level.data}')
        return redirect(url_for('add_door'))
    return render_template('add_door.html', title='Añadir Door', form=form)


@app.route('/see_employees')
def see_employees():
    employees = Employee.query.all()
    return render_template('see_employees.html', title="Lista de Employees", employees=employees)


@app.route('/see_doors')
def see_doors():
    doors = Door.query.all()
    return render_template('see_doors.html', title="Lista de Employees", doors=doors)

#----------------- Delete urls ------------------#

@app.route('/delete_employee/<int:id>', methods=['GET', 'POST'])
def delete_employee(id):
    employee = Employee.query.filter_by(id=id).first()
    form = ConfirmForm()
    if form.validate_on_submit():
        #Borrar al employee
        db.session.delete(employee)
        db.session.commit()
        flash(
            f'Borrado al employee'
        )
        return redirect(url_for('see_employees'))
    return render_template('delete_employee.html', title="Borrar employee", form=form, employee=employee)

@app.route('/delete_door/<int:id>', methods=['GET', 'POST'])
def delete_door(id):
    door = Door.query.filter_by(id=id).first()
    form = ConfirmForm()
    if form.validate_on_submit():
        #Borrar la door
        db.session.delete(door)
        db.session.commit()
        flash(
            f'Borrada la door'
        )
        return redirect(url_for('see_doors'))
    return render_template('delete_door.html', title="Borrar door", form=form, door=door)



#----------------- Edit urls ------------------#

@app.route('/edit_employee/<int:id>', methods=['GET', 'POST'])
def edit_employee(id):
    form = EditEmployeeForm()
    employee_to_edit = Employee.query.filter_by(id=id).first()
    if form.validate_on_submit():
        employee_to_edit.name = form.name.data
        employee_to_edit.dni = form.dni.data
        employee_to_edit.access_level = form.access_level.data
        employee_to_edit.rfid = form.rfid.data
        db.session.add(employee_to_edit)
        db.session.commit()
        flash('Your changes have been saved.')
        return redirect(url_for('see_employees'))
    elif request.method == 'GET':
        form.name.data = employee_to_edit.name
        form.dni.data = employee_to_edit.dni
        form.access_level.data = employee_to_edit.access_level
        form.rfid.data = employee_to_edit.rfid
    return render_template('edit_employee.html', title='Editar Employee',
                           form=form)


@app.route('/edit_door/<int:id>', methods=['GET', 'POST'])
def edit_door(id):
    form = EditDoorForm()
    door_to_edit = Door.query.filter_by(id=id).first()
    if form.validate_on_submit():
        door_to_edit.security_level = form.security_level.data
        door_to_edit.note = form.note.data
        db.session.add(door_to_edit)
        db.session.commit()
        flash('Your changes have been saved.')
        return redirect(url_for('see_doors'))
    elif request.method == 'GET':
        form.note.data = door_to_edit.note
        form.security_level.data = door_to_edit.security_level
    return render_template('edit_door.html', title='Editar Door',
                           form=form)


# ------------------- API ROUTES ----------------------- #


@app.route('/api/let_employee_pass/<string:rfid>/<int:door>')
def get_employee(rfid, door):
    employee = Employee.query.filter_by(rfid=rfid).first()
    door = Door.query.filter_by(id=door).first()
    # ------------ Inicio de checkeo de existencia de datos en la base de datos ------------------- #
    if employee == None:
        return {
            'mensaje': f'El RFID {rfid} no fue encontrado en la base de datos',
            'access': False
        }
    elif door == None:
        return {
            'mensaje': f'La door no fue encontrada',
            'access': False
        }

    # ------------ Fin de checkeo de existencia de datos en la base de datos ------------------- #
    # Si el employee NO tiene el nivel de seguridad necesario
    if (employee.access_level >= door.security_level) == False:
        respuesta = {
            'mensaje': f"El employee {employee.name} con el nivel de access {employee.access_level} NO ha sido authorized a pasar por la door {door.id}",
            'access': False
        }
        authorized = False
    # Si el employee SI tiene el nivel de seguridad necesario
    else:
        respuesta = {
            'mensaje': f"El employee {employee.name} con el nivel de access {employee.access_level} ha sido authorized a pasar por la door {door.id} con el nivel de seguridad {door.security_level}",
            'access': True
        }
        authorized = True
    # Agregar access (permitido o denegado, cualsea) en la base de datos
    access = Access(employee=employee, door=door, authorized=authorized)
    db.session.add(access)
    db.session.commit()
    return respuesta


@app.route('/api/status')
def status():
    return {
        'status': True
    }
