#include <iostream>
#include <array>
#include "Matriz.h"

using namespace std;

Matriz::Matriz(int filas, int columnas){ //constructor normal
   cout<<"Generando Constructor Normal..."<<endl;
   this->filas = filas;
   this->columnas = columnas;
    mPtr = new char*[filas];
    for (int i = 0; i < filas; i++) {
        mPtr[i] = new char[columnas];
    }
}

Matriz::Matriz(Matriz & copia ){ //constructor copia
    cout<<"Generando Constructor por copia..."<<endl;
    this->filas = copia.filas;
    this->columnas = copia.columnas;
    this->mPtr = new char*[filas];
    for (int i = 0; i <filas; i++) {
        this->mPtr[i] = new char[columnas];
    }
    
}

 Matriz::~Matriz() {  //destructor
        cout<<"\n"<<"Matando objeto"<<endl;
        for (int i = 0; i < filas; i++) {
            delete [] mPtr[i];
        }
        delete [] mPtr;
}

void Matriz::setValor(int filas, int columnas, char elemento){  //setvalor en matriz
    if(filas<0 || filas >= this-> filas){
        cout<<"Error"<<endl;
    }
    if(columnas<0||columnas>= this->columnas){
        cout<<"Error"<<endl;
    }

    mPtr[filas][columnas]= elemento;
}

char Matriz::getValor(int filas,int columnas){ //obtener valor de matriz
    if(filas<0 || filas >= this-> filas){
        cout<<"Error"<<endl;
    }
    if(columnas<0||columnas>= this->columnas){
        cout<<"Error"<<endl;
    }

    return mPtr[filas][columnas];
}

int Matriz::getFilas() {  //obtener numero de filas
    return this->filas;
}
int Matriz::getColumnas() { //obtener numero de columnas
    return this->columnas;
}
void Matriz::imprimir(){ //
    for (int i = 0; i < filas; i++) {
        for(int j = 0; j< columnas; j++){
            cout<<mPtr[i][j];
        }
        cout<<""<<endl;
    }
    
}

Matriz & Matriz::operator=(const Matriz & copia){   //operador de asignación, elemento que se necesita para la tarea 4 de matriz sobrecargada
   if (this != &copia){
       this->filas= copia.filas;
       this->columnas = copia.columnas;

       for (int i = 0; i < filas; i++) { //borrando el contenido de la matriz vieja para evitar una fuga de memoria
            delete [] this->mPtr[i];
        }
        delete [] this->mPtr;
        this->mPtr = new char*[copia.filas];
        for (int i = 0; i < filas; i++) {
            this->mPtr[i] = new char[copia.columnas];
        }

        for (int i = 0; i <copia.filas; i++) { //copiando los valores de la matriz
            for(int j=0; j<copia.columnas;j++){
                this->mPtr[i][j] = copia.mPtr[i][j];
            }
        }
   }
   return *this;
}





















