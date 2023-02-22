#include "Persona.cpp"
#include <iostream>
using namespace std;

class Cliente : Persona {
	
	private : string nit;
	

	public : 
	Cliente (){
	}
	
	Cliente(string nom,string ape,string dir,string fn,int tel,string n) : Persona(nom,ape,dir,fn,tel){
		nit = n;
	}
	
	void setNit(string n){nit = n;}
	void setNombres(string nom){nombres = nom;}
	void setApellidos(string ape){apellidos = ape;}
	void setDireccion(string dir){direccion = dir;}
	void setFechaNacimiento(string fn){fecha_nacimiento = fn;}
	void setTelefono(int tel){telefono = tel;}
	
	string getNit(){return nit;}
	string getNombres(){return nombres;}
	string getApellidos(){return apellidos;}
	string getDireccion(){return direccion;}
	string getFechaNacimiento(){return fecha_nacimiento;}
	int getTelefono(){return telefono;}
	
	void mostrar(){
		cout<<"_____________________"<<endl;
		cout<<"-------ELABORADO EN CRUD------"<<endl;
		cout<<"_____________________"<<endl;
		Cour<<"DATOS A MOSTRAR"<<endl;
		cout<<nit<<", "<<nombres<<", "<<apellidos<<", "<<direccion<<", "<<fecha_nacimiento<<", "<<telefono<<endl;
	}
};

