#include<iostream>
using namespace std;
int main(){
   char nombre[1024];
   cout << "Nombre:";
   cin >> nombre;
   nombre[30]='\0';
   cout << endl;
   cout << "Su nombre es: "<< nombre << endl;
   return 0;
}
