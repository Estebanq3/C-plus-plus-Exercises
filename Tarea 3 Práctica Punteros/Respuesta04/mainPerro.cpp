#include"Perro.h"
#include<iostream>
using namespace std;
//En este programa lo que ocurre es que se crea un vector con 10 punteros, los cuales pueden apuntar a cualquier instancia de perro.
int main(){
 Perro * perro[10];
 
 for(int i=0; i<10; i++){
	 cout<<perro[i]<<endl;
 }


  
  return 0;
}
