#include "Persona.cpp"
#include <iostream>
using namespace std;

class Empleado : Persona {
	//Atributos
	private :  string codigo, puesto, sueldo;
	
	//constructor
	public : 
	Empleado (){
	}
	
	Empleado(string nom, string ape, string dir, int tel, string cod, string p, string suel) : Persona(nom,ape, dir,tel){
		codigo = cod;
		puesto = p;
		sueldo = suel;
	}
	//metodos
	//set (modificar)
	void setCodigo(string cod){codigo = cod;}
	void setPuesto(string p){puesto = p;}
	void setSueldo(string suel){sueldo = suel;}
	void setNombres(string nom){nombres = nom;}
	void setApellidos(string ape){apellidos = ape;}
	void setdireccion(string dir){direccion = dir;}
	void setTelefono(int tel){telefono = tel;}
	
	//get (mostrar)
	string getCodigo(){return codigo;}
	string getPuesto(){return puesto;}
	string getSueldo(){return sueldo;}
	string getNombres(){return nombres;}
	string getApellidos(){return apellidos;}
	string getDireccion(){return direccion;}
	int getTelefono(){return telefono;}
	
	
	//metodos
	void mostrar(){
		cout<<"_______________________"<<endl;
		cout<<codigo<<","<<puesto<<","<<sueldo<<","<<nombres<<","<<apellidos<<","<<direccion<<","<<telefono<<endl;
	}
};

