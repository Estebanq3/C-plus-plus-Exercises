#include <iostream>
#include "Matriz.h"

using namespace std;

Matriz::Matriz(int filas, int columnas){ //constructor
   this->filas = filas;
   this->columnas = columnas;
    mPtr = new char*[filas];
    for (int i = 0; i < filas; i++) {
        mPtr[i] = new char[columnas];
    }
}

Matriz::Matriz( Matriz & copia ){
    cout<< "Construyendo copia" <<endl;
    this->filas = copia.filas;
    this->columnas = copia.columnas;
    this->mPtr= mPtr;
    for (int i = 0; i < filas; i++) {
    mPtr[filas] = new char[columnas];
    }

}

 Matriz::~Matriz() {  //destructor
        cout<<"\n"<<"Matando mPtr"<<endl;
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
















