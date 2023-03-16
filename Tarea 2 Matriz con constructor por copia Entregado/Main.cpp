#include<iostream>
#include "Matriz.h"
using namespace std;

int main(){

    Matriz matriz(2, 3); //la cuenta no se inicia en cero para la construcción de la matriz, por lo tanto es originalmente de 2x3 y no de 3x4 si se empezara a contar desde el cero
    Matriz matrizCopia(matriz);
    
    for(int i = 0; i<matriz.getFilas(); i++){
        for(int j=0; j<matriz.getColumnas(); j++){
            matriz.setValor(i,j,'a'); // se generará una matriz de 2x3 con una a en cada casilla
        }
    }
    for(int i=0; i<matrizCopia.getFilas();i++){
        for(int j=0; j<matrizCopia.getColumnas();j++){
            matrizCopia.setValor(i,j,matriz.getValor(i,j));
        }
    }
    

    cout<<"Matriz Original:"<<endl;
    matriz.imprimir();
    cout<<"Matriz Copia:"<<endl;
    //matrizCopia.setValor(0,0,'b');
    matrizCopia.imprimir();

    cout<<"\nDemostrando que si se cambia la matriz copia no se cambia la original:"<<endl;
    matrizCopia.setValor(0,0,'b');
    cout<<"Matriz Original:"<<endl;
    matriz.imprimir();
    cout<<"Matriz Copia:"<<endl;
    matrizCopia.imprimir();

    

    
}

