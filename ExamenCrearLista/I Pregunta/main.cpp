#include "Lista.h"
#include<iostream>
using namespace std;

int main(){
   int v[] = {-10,8,14,4,2,1,0,18,25,80};

   Lista lista(10,(int *) v ); 
   cout << lista << endl;
   
   cout << "Saco el primero: "<< lista.pop_front() << endl;
   cout << lista << endl;

   cout << "Saco el ultimo: "<< lista.pop_back() << endl;
   cout << lista << endl;

   Lista::Iterador iter = lista.buscar(3);
   lista.borrar( iter );
   cout << "Busca y borra el 3"<< endl;
   cout << lista<< endl;

   cout << "Suma 1 a cada elemento usando *iterador"<<endl;
   
   Lista::Iterador fin = lista.end();
   for(Lista::Iterador i = lista.begin(); i!= fin; ++i){
      ++( *i ); // sumo 1 a cada elemento de la lista usando iterador i
   } 
   cout << lista << endl;

   Lista::Iterador a = lista.buscar(5);
   Lista::Iterador b = lista.buscar(26);
   

   cout << "Lista original "<< endl;
   cout << lista << endl;
   
   --b;
   


   return 0;
}
