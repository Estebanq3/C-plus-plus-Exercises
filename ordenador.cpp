#include <iostream>
using namespace std;

class OrdenadorNum{
	
	public:
	
		void metodoOrdenar(int numero1,int numero2){
			int auxiliar=0; //variable local
			if(numero1>numero2){
				auxiliar=numero1;
				numero1=numero2;
				numero2=auxiliar;
			}
			cout<<"\nOrdenación Realizada\n"<< numero1<< numero2<< numero3<<endl;
				
		}
		
		
		void ordenacion(){
		metodoOrdenar(numero1,numero2);
		metodoOrdenar(numero2,numero3);
		metodoOrdenar(numero1,numero2);
		}
		
		void establecerNum1(int num1){
			numero1=num1;
		}
		
		void establecerNum2(int num2){
			numero2=num2;
		}
		
		void establecerNum3(int num3){
			numero3=num3;
		}
		
		
		
		
		int obtenerNum1(){
			return numero1;
		}
		
		
		int obtenerNum2(){
			return numero2;
		}
		
		
		int obtenerNum3(){
			return numero3;
		}
		
		void mostrarNumeros(){
			cout<<"Numeros ordenados:\n"<<obtenerNum1()<<','
			<<obtenerNum2()<<','<<obtenerNum3()<<endl;
		}
		
		private:
			int numero1=0;
			int numero2=0;
			int numero3=0;
			
	
};


int main(){
	
	int numero1=0;
	int numero2=0;
	int numero3=0;
	OrdenadorNum ordenador;
	
	cout<< "Los valores iniciales de numero1,numero2 numero2 numero3 son:"
	<<ordenador.obtenerNum1()<<','<<ordenador.obtenerNum2()<<','
	<<ordenador.obtenerNum3()<<endl;
	
	cout<< "Escriba los 3 numeros que desea ordenar"<<endl;
	cin>>numero1>>numero2>>numero3;
	//miLibro.establecerNombreCurso(nombreDelCurso)
	ordenador.establecerNum1(numero1);
	ordenador.establecerNum2(numero2);
	ordenador.establecerNum3(numero3);
	
	

	cout<<endl;

	ordenador.ordenacion();
	ordenador.mostrarNumeros();
	cout<<"\n"<<numero1<<','<<numero2<<','<<numero3<<endl;
	
	
	return 0;
}
