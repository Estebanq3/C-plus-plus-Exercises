#include <iostream>
#include "base1.h"
#include "base2.h"
#include "derivada.h"

using namespace std;

int main(){

Base1 base1 (10);
Base2 base2 ('B');
Derivada derivada(10,'C', 5);

cout<< "\n Dato base1: " << base1.getData() <<endl;
cout<< "Dato base2: " <<base2.getData() <<endl;
cout << "Derivada: " << derivada << endl; 

//accesar a cada papa desde derivada, para evitar enredos, es mejor especificar todo con delimitadores, ya que si tienen el mismo nombre, como en este caso pueden suceder errores fatales

cout<< "Miembros de derivada accesados individualmente sin usar el operador sobrecargado: "
<< "Entero: " << derivada.Base1::getData() << endl 
<< "Char: " << derivada.Base2::getData() << endl
<< "Real: " << derivada.getReal() <<endl;



}