#include "Cliente.cpp"
#include <iostream>
using namespace std;
main(){
	string nit,nombres,apellidos,direccion,fecha_nacimiento;
	int telefono;
	
	cout<<"Ingresar Nit: ";
	cin>>nit;
	cout<<"Ingresar Nombres: ";
	cin>>nombres;
	cout<<"Ingresar Apellidos: ";
	cin>>apellidos;
	cout<<"Ingresar Direccion: ";
	cin>>direccion;
	cout<<"Ingresar su fecha de nacimiento: ";
	cin>>fecha_nacimiento;
	cout<<"Ingresar Telefono: ";
	cin>>telefono;
	
	Cliente obj = Cliente(nombres,apellidos,direccion,fecha_nacimiento,telefono,nit);
	obj.mostrar();
	
	cout<<"Ingresar Nit: ";
	cin>>nit;
	obj.setNit(nit);
	obj.mostrar();
	}
