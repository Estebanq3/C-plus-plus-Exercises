#include "Matriz.h"
#include<iostream>
using namespace std;

int main(){
   Matriz a;
   Matriz x(2,2);
   Matriz b(3,3);

   cout << "Digite valores de matriz de 3 x 3:";
   cin >> b;

   cout << "Leidos los valores"<< endl;
   cout << b;

   cout << "Se asigna a = b"<< endl;
   a = b;
   cout << "Se asigna X a la diagonal de b"<< endl;
   b.set(0,0,'X');
   b.set(1,1,'X');
   b.set(2,2,'X');;
   cout << "A y B tienen estos valores"<< endl;
   cout << a;
   cout << b;

   cout << "X vale"<<endl;
   cout << x;
   x = a;
   cout << "X vale"<<endl;
   cout << x;
   return 0;
}
