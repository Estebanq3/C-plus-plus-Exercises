#include<iostream>
#include <string>

using namespace std;




class Empleado{
	
	public:
	Empleado (string nombre, string apellido, int salario){
		establecerNombre(nombre);
		establecerApellido(apellido);
		establecerSalario(salario);
	}
	
	
	//getters and setters
	void establecerNombre(string name){
		nombre=name;
	}
	void establecerApellido(string lastName){
		apellidoMaterno=lastName;
	}
	void establecerSalario(int salary){
		if(salary<0){
			salario=0;
		}
		else{
			if(salary>0){
				salario=salary;
			}
		}
		
	}
	
	string obtenerNombre()const{
		return nombre;
	}
	string obtenerApellido()const{
		return apellidoMaterno;
	}
	int obtenerSalario()const{
		return salario;
	}
	//fin de getters and setters
	
	//Inicio de funciones miembro
	
	void calcularSalarioAnual(){
		int salarioAnual=0;
		salarioAnual= salario*12;
		cout<<"Salario Anual:"<<salarioAnual<<endl;
	}
	
	void calcularConAumento(){
		int salarioAumentado=0;
		salarioAumentado= salario*0.10+salario;
		salarioAumentado*=12;
		cout<<"Salario Aumentado Anual:"<<salarioAumentado<<endl;
		
	}
	//fin de funciones

	
	
	
	
	private:
		string nombre;
		string apellidoMaterno;
		int salario;
};

int main(){
	
	//string nombre; no es necesaria
	string apellidoMaterno; //tampoco es necesaria
	int salario;
	
	Empleado empleado1("Esteban", "Quesada", 0);
	
	cout<<"Digite el salario que recibe el empleado, \n recuerde que debe ser mayor a 0"<<endl;
	cin>>salario;
	empleado1.establecerSalario(salario);
	cout<<"Datos del empleado:"<<endl;
	cout<<"Salario:"<<empleado1.obtenerSalario()<<endl;
	cout<<"Nombre:"<<empleado1.obtenerNombre()<<endl;
	empleado1.calcularSalarioAnual();
	empleado1.calcularConAumento();
	
}