#include<iostream>
using namespace std;
int main(){
   int v[] = {1,2,3};

//   char s[] = {'a','b','c','\0'};

   char s[] = "hola mundo";
   char * p = s;

   char nombre[21];
   cout << "Digite un nombre: ";
   cin >> nombre;
   cout << endl;

   p = nombre;
  

   cout << "v = "<< v << endl;
   cout << "Direccion de s:" << *s<<endl;
   cout << "s = "<< s << endl;
   cout << "Direccion de p: "<< &p<<endl;
   cout << "p = "<< p << endl;
   cout << "(void *) s = "<< (void *) s << endl;


   return 0;
}
