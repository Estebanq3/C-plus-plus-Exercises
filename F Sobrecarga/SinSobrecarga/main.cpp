#include "Racional.h"
#include<iostream>
using namespace std;

int main(){
   Racional r1;
   Racional r2;

   cout << "Digite un racional numerador seguido del denominador: ";
   leer(cin, r1);
   cout << endl;
   cout << "Digite un racional numerador seguido del denominador: ";
   leer(cin, r2);

   cout << endl;
   cout << "Racionales leidos: ";
   imprimir(cout, r1);
   cout << "  ";
   imprimir(cout, r2);
   cout << endl;

   Racional suma;
   Racional resta;
   Racional producto;
   Racional division;
   Racional pre;
   Racional pos;

   suma.asignar( r1.mas(r2) );

   cout << "Suma= ";
   imprimir(cout,suma);
   cout << endl;

   resta.asignar( r1.menos(r2));
   cout << "Resta= ";
   imprimir(cout,resta);
   cout << endl;

   cout << "Producto= ";
   producto.asignar( r1.por(r2));
   imprimir(cout,producto);

   cout << endl;
   cout << "Division= ";

   division.asignar( r1.entre(r2));
   imprimir(cout,division);
  
   cout << endl;
   cout << "Pre Incremento de r1 = "; 
   pre.asignar( r1.preIncremento());
   imprimir(cout,pre);

   cout << endl;
   cout << "Pos Incremento de r2 = ";
   pos.asignar( r2.posIncremento());
   imprimir(cout,pos);



   cout << endl;
   cout << "Racionales leidos: ";
   imprimir(cout, r1);
   cout << "  ";
   imprimir(cout, r2);
   cout << endl;

   Racional uno(1,2);
   Racional dos(3,6);

   if(uno.esIgualA(dos)){
     imprimir(cout, uno);
     cout << " es igual a ";
     imprimir(cout, dos);
     cout << endl;
   }

   return 0;
}
