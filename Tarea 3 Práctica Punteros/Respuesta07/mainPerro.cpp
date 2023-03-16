#include"Perro.h"
#include<iostream>
using namespace std;
//en este programa lo que sucede es que se crea un puntero que apunta a un vector con 10 punteros a Perro y su dirección incial(es decir la dirección del vector de punteros) se almacena en perro.
int main(){
 Perro ** perro= new Perro*[10];
for(int i=0; i<10; i++){
	cout<<perro[i]<<endl;
}
cout<<"direccion del puntero que apunta al vector: "<< &(**perro)<<endl;
cout<<"contenido de primera casilla del vector: "<<perro[0]<<endl;
 
  return 0;
}
