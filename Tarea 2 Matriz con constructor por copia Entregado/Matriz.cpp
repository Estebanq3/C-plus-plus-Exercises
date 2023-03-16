#include <iostream>
#include <array>
#include "Matriz.h"

using namespace std;

Matriz::Matriz(int filas, int columnas){ //constructor normal
   cout<<"Construyendo Constructor normal..."<<endl;
   this->filas = filas;
   this->columnas = columnas;
    mPtr = new char*[filas];
    for (int i = 0; i < filas; i++) {
        mPtr[i] = new char[columnas];
    }
}

Matriz::Matriz(Matriz & copia ){
    cout<<"Construyendo Constructor por copia..."<<endl;
    this->filas = copia.filas;
    this->columnas = copia.columnas;
    this->mPtr = new char*[filas];
    for (int i = 0; i <filas; i++) {
        this->mPtr[i] = new char[columnas];
    }
    
}

 Matriz::~Matriz() {  //destructor
        cout<<"\n"<<"Matando constructor"<<endl;
        for (int i = 0; i < filas; i++) {
            delete [] mPtr[i];
        }
        delete [] mPtr;
}

void Matriz::setValor(int filas, int columnas, char elemento){
    if(filas<0 || filas >= this-> filas){
        cout<<"Error"<<endl;
    }
    if(columnas<0||columnas>= this->columnas){
        cout<<"Error"<<endl;
    }

    mPtr[filas][columnas]= elemento;
}

char Matriz::getValor(int filas,int columnas){
    if(filas<0 || filas >= this-> filas){
        cout<<"Error"<<endl;
    }
    if(columnas<0||columnas>= this->columnas){
        cout<<"Error"<<endl;
    }

    return mPtr[filas][columnas];
}

int Matriz::getFilas() {
    return this->filas;
}
int Matriz::getColumnas() {
    return this->columnas;
}
void Matriz::imprimir(){
    for (int i = 0; i < filas; i++) {
        for(int j = 0; j< columnas; j++){
            cout<<mPtr[i][j];
        }
        cout<<""<<endl;
    }
    
}

















