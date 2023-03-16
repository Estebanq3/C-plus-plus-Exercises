#include <iostream>
using namespace std;

//se produce un error de sintaxis ya que no se puede asignar v=p, puesto que p es un puntero y v es un vector

int main(){

    int v[5]= {20,40,60,80,100};
    int*p= &v[1];
    v=p; // error incompatible types in assignment of int* to int[5]
    cout<<v[3];
    return 0;
}