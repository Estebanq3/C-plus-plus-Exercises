#include<iostream>
#include <string>
#include<conio.h>

using namespace std;




int main(){
	int numero=0;
	int contador=0;
	int factorial=1;
	
	
	cout<<"Digite el numero al que desea sacarle el factorial:"<<endl;
	cin>>numero;
	contador=numero;
	
	while(contador!=0){
		factorial*=contador;
		--contador;
	}
	
	cout<<"El factorial del numero es:"<<factorial<<endl;

cout<<"Presione una tecla para terminar el programa";
getch();


}
