#include<fstream>
#include<iostream>
using namespace std;
//main creado para leer el archivo.txt
int main(){
   ifstream entrada("numeros.txt");
   int x = 0;

   while(!entrada.eof()){
      entrada >> x;
      cout << x << " " << endl;
   }
   return 0;

}
