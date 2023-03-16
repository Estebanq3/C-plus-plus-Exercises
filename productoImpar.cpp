#include <iostream>
#include <string>
#include<conio.h>

using namespace std;



int main(){
	
	int productoImpar=1;
	
	for(int contador=1;contador<=15;contador+=2){
		productoImpar*=contador;
	}

	cout<<"Producto Impar:"<<productoImpar<<endl;
	
	cout<<"Digite una tecla para finalizar el programa"<<endl;
	getch();
}