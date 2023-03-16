#include "ListaO.h"
#include<iostream>
using namespace std;

int main(){
   int v[] = {-10,8,14,4,2,1,0,18,25,80};

   ListaO listaO(10,(int *) v ); 
   cout<<listaO<<endl;

   //Probando metodo insertar
   listaO.insertarOrdenado(3); //insercion entre dos elementos de la lista
   listaO.insertarOrdenado(-20); //insercion al principio de la lista
   listaO.insertarOrdenado(82); //insercion al final de la lista

   //Probando metodos getFrecuencia
   ListaO::Iterador iterFin;
   iterFin = listaO.end();

   cout << "Valor de la frecuencia de Iterador::end() es : "<< iterFin.getFrecuencia() <<endl;

   for(ListaO::Iterador iterador = listaO.begin(); iterador != iterFin; iterador++){
      cout<<"Valor Lista:" << *iterador <<"con Frecuencia:" << iterador.getFrecuencia() << endl;
   }

   cout<< "Imprimimos la lista en una sola linea: "<< listaO<<endl;
   


   return 0;
}
