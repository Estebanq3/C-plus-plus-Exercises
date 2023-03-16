#include<iostream>
using namespace std;
int main(){
   char * ptr;
   cout << "Cuantos char quiere digitar:"<< endl;
   int cantidad =0;
   cin >> cantidad;

   ptr = new char[cantidad];
   cout << "Nombre:";
   cin >> ptr;

   ptr[cantidad-1]='\0';
   cout << endl;
   cout << "Su nombre es: "<< ptr << endl;

   delete [] ptr;
   return 0;
}
