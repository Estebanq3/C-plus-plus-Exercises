#include <iostream>
#include <string>
#include<conio.h>

using namespace std;


int main(){
	
	int numerosInsertados=0;
	int sumatoria=0;
	int numeroASumar=0;
	int promedio=0;
	
	//for que suma los números que se van a introducir
	for(int centinela= 0; centinela>-1; ++centinela){

		cout<<"Digite el numero siguiente:"<<"\n Si ya desea sacar el promedio escriba:9999"<<endl;
		cin>>numeroASumar;
		if(numeroASumar==9999){
			break;
		}
		sumatoria+=numeroASumar;
		++numerosInsertados;
		
	}
	//fin
	
	promedio= sumatoria/numerosInsertados;
	cout<<"Promedio:"<<promedio<<endl;
	
	
	cout<<"Digite una tecla para finalizar el programa"<<endl;
	getch();
}