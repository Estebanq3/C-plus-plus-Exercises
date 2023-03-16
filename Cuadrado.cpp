#include <iostream>
#include <string>

using namespace std;




class Cuadrado{
	
	public:
	Cuadrado(int medidaLados){
		establecerMedidaLados(medidaLados);
	}
	
	//inicio de set and get
	void establecerMedidaLados(int medida){
		medidaLados=medida;
	}
	int obtenerMedidaLados(){
		return medidaLados;
	}
	//fin de set and get
	
	
	//inicio funciones miembro
	void dibujarCuadrado(){
		unsigned int contador= 1;
		unsigned int contadorInterno=1;
		unsigned int contadorExtremos=1;
		int medidaCuerpo= medidaLados-2;
		
		while(contador<=2){
			while(contadorExtremos<=medidaLados){
				cout<<"*";
				++contadorExtremos;
			}
			while(contadorInterno<=medidaCuerpo){
				cout<<"\n *";
				relleno(medidaCuerpo);
				cout<<"*"<<endl;
				++contadorInterno;
			}
		++contador;
		contadorExtremos=1;
		}
	}
	
	void relleno(int relleno){
		unsigned int contador=1;
		while(contador<=relleno){
			cout<<"0";
			++contador;
		}
	}
	
	//fin funciones miembro
	
	
	
	
	
	private:
		int medidaLados=0;
	
};

int main(){
	
	Cuadrado cuadrado(0);
	cuadrado.establecerMedidaLados(6);
	cuadrado.dibujarCuadrado();
}