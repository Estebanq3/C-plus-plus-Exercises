#include <iostream>
#include <string>
#include <conio.h>

using namespace std;




int main(){
	
	int numero=0;
	string palabra="";
	string invertida;
	int contador=1;
	int contadorInverso=0;
	
	cout<<"Escriba una palabra:"<<endl;
	cin>>numero;
	palabra=to_string(numero);
	contador=palabra.size();
	
	//método para darle vuelta a las palabras o a los números
	while(contador>=0){
		invertida+=palabra[contador];
		--contador;
	}
	contador=0;
	contadorInverso= palabra.size();
	//fin del método
	
	
	//método para saber si es un palíndromo o no
	while(contador!=-1&& contador<palabra.size()){
		if(palabra[contador]==invertida[contador+1]){
			++contador;
		}
		else{
		cout<<"La palabra no es un palindromo"<<endl;
		contador=-1;
		}	
	}
	
	if(contador!=-1){
		cout<<"La palabra es un palindromo"<<endl;
	}
	//fin del método
	
	
	
	cout<<"Palabra introducida:"<<palabra<<"\n Palabra invertida:"<<invertida<<endl;

	//función getch de presione una tecla para finalizar
	cout<<"Presione una tecla para finalizar"<<endl;
	getch();
	//fin de función getch
	return 0;
	
}