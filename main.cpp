#include "Empleado.cpp"
#include <iostream>
using namespace std;
main(){
	string codigo,puesto,sueldo,nombres,apellidos,direccion;
	int telefono;
	
	cout<<"Ingrese codigo del empleado:";
	cin>>codigo;
	cout<<"Ingrese puesto del empleado:";
	cin>>puesto;
	cout<<"Ingrese sueldo del empleado:";
	cin>>sueldo;
	cout<<"Ingrese nombres del empleado:";
	cin>>nombres;
	cout<<"Ingrese apellidos del empleado:";
	cin>>apellidos;
	cout<<"Ingrese direccion del empleado:";
	cin>>direccion;
	cout<<"Ingrese telefono del empleado:";
	cin>>telefono;
	
	//instancia de un objeto 
	Empleado obj = Empleado(nombres, apellidos, direccion, telefono, codigo, puesto, sueldo);
	obj.mostrar();
	
	
	//cout<<"Datos del Empleado: "<<obj.getCodigo()<<","<<obj.getPuesto()<<","<<obj.getSueldo()<<","<<obj.getNombres()<<","<<obj.getApellidos()<<","<<obj.getDireccion()<<","<<obj.getTelefono()<<","<<endl;
	
	/*Empleado obj = Empleado ();
	obj.setCodigo(codigo);
	obj.setPuesto(puesto);
	obj.setSueldo(sueldo);
	obj.setNombres(nombres);
	obj.setApellidos(apellidos);
	obj.setdireccion(direccion);
	obj.setTelefono(telefono);
	obj.mostrar();*/
	
	
}
