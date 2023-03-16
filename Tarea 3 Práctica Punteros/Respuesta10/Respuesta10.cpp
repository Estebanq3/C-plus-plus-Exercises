#include<iostream>
using namespace std;
//En este programa lo que sucede es que el puntero v queda apuntando al vector de punteros char, que apunta al char hola, por lo tanto al imprimir v va imprimiendo a lo que apunta el vector char hasta que se encuentra el /0

int main(){
    
    char *v = (char *) "Hola";
    cout << v << endl;

}