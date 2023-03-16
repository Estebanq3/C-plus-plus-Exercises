#include "Racional.h"
#include<iostream>
using namespace std;

int main(){
   Racional r1;
   Racional r2;

   cout << "Digite un racional numerador seguido del denominador: ";
   cin >> r1;
   cout << endl;
   cout << "Digite un racional numerador seguido del denominador: ";
   cin >> r2;

   cout << endl;
   cout << "Racionales leidos: ";
   cout << r1;
   cout << "  ";
   cout << r2;
   cout << endl;

   Racional suma;
   Racional resta;
   Racional producto;
   Racional division;
   Racional pre;
   Racional pos;

   suma = r1 + r2; //suma es un objeto matriz por ejemplo; 

   cout << "Suma= ";
   cout << suma;
   cout << endl;

   resta = r1 - r2;
   cout << "Resta= ";
   cout << resta;
   cout << endl;

   cout << "Producto= ";
   producto = r1 * r2;
   cout << producto;

   cout << endl;
   cout << "Division= ";

   division = r1 / r2;
   cout << division;
  
   cout << endl;
   cout << "Pre Incremento de r1 = "; 
   pre = ++r1; 
   cout << pre;

   cout << endl;
   cout << "Pos Incremento de r2 = ";
   pos = r2++;
   cout << pos;



   cout << endl;
   cout << "Racionales leidos: ";
   cout << r1;
   cout << "  ";
   cout << r2;
   cout << endl;

   Racional uno(1,2);
   Racional dos(3,6);

   if(uno == dos){
     cout << uno;
     cout << " es igual a ";
     cout << dos;
     cout << endl;
   }

   return 0;
}
