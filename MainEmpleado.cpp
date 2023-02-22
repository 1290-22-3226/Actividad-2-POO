#include "Empleado.cpp"
#include <iostream>
using namespace std;
main(){
	string puesto,nombres,apellidos,direccion,fecha_nacimiento;
	int telefono,codigo_empleado;
	
	cout<<"Ingresar Puesto: ";
	cin>>puesto;
	cout<<"Ingresar Nombres: ";
	cin>>nombres;
	cout<<"Ingresar Apellidos: ";
	cin>>apellidos;
	cout<<"Ingresar Direccion: ";
	cin>>direccion;
	cout<<"Ingresar Codigo de empleado: ";
	cin>>codigo_empleado;
	cout<<"Ingresar su fecha de nacimiento: ";
	cin>>fecha_nacimiento;
	cout<<"Ingresar Telefono: ";
	cin>>telefono;
	//isntancia de un objeto
	Empleado obj = Empleado(nombres,apellidos,direccion,fecha_nacimiento,telefono,puesto,codigo_empleado);
	obj.mostrar();
	
	cout<<"Ingrese su nuevo puesto: ";
	cin>>puesto;
	obj.setPuesto(puesto);
	obj.mostrar();
	}
