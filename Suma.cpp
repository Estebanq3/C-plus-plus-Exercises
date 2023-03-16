#include<iostream>
#include <string>
#include<conio.h>

using namespace std;



int main(){
	
	int serie=0;
	int sumatoria=0;
	cout<<"Digite cuantos numeros desea sumar:"<<endl;
	cin>>serie;
	
	//for que suma los números que se van a introducir
	for(int contador=1; contador<=serie;++contador){
		int numeroASumar=0;
		cout<<"Digite el numero a sumar:"<<endl;
		cin>>numeroASumar;
		sumatoria+=numeroASumar;
	}
	
	cout<<"Resultado de la sumatoria:"<<sumatoria<<endl;
	
	//fin
	
	cout<<"Digite una tecla para finalizar el programa"<<endl;
	getch();
}