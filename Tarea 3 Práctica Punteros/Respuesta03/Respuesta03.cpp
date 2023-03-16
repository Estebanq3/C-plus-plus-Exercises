#include <iostream>
using namespace std;
//En este programa lo que ocurre es que al imprimir a lo que apunta el puntero, se estaría imprimiendo una h.

int main(){
  char *v = (char*)"Hola";
  cout << *v << endl;
    
    return 0;
}