#include <iostream>
#include <string>
#include <math.h>

using namespace std;




int main(){
	int binario=0;
	int size=0;
	string cadena="";
	int decimal=0;
	
	//variables necesarias para despedazar número
	//int numero=0; ya está binario
	int temporal=0;
	int divisor=1;
	
	
	//funciones para captar el numero binario y saber cuantos digitos tiene
	cout<<"Digite el numero binario que desea convertir a decimal:"<<endl;
	cin>>binario;
	cadena = to_string(binario);
	cout<<"Numero:"<<cadena<<endl;
	
	size= cadena.size()-1;
	cout<<"\n"<<"Size:"<<size<<endl;
	//fin de funciones
	
	//Despedazar número en digitos e ir convirtiendolo a decimal
	temporal=binario;
	
	//hallar valor del divisor
	while(temporal/10!=0){
		temporal=temporal/10;
		divisor=divisor*10;
	}
	//fin
	
	while(divisor!=0){
		int actual= binario/divisor;
		decimal+= pow(2,size)*actual;
		size-=1;
		
		
		
		binario = binario%divisor;
		divisor = divisor/10;
	}
	
	cout<<"Numero en Decimal:"<<decimal<<endl;
	
	//fin de función
	
	
	
	
}