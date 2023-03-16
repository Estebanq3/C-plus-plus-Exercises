#include<iostream>
#include "Matriz.h"

using namespace std;

int main(){

    Matriz matriz(2, 3); //la cuenta no se inicia en cero para la construcción de la matriz, por lo tanto es originalmente de 2x3 y no de 3x4 si se empezara a contar desde el cero
    for(int i = 0; i<matriz.getFilas(); i++){
        for(int j=0; j<matriz.getColumnas(); j++){
            matriz.setValor(i,j,'a'); // se generará una matriz de 2x3 con una a en cada casilla
        }
    }
    cout<<matriz.getValor(0,0)<<endl;
    matriz.imprimir();

    return 0;
}

