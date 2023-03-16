#include <iostream>
#include "Vecindario"
#include "ListaO.h"
include "Lista.h"

Vecindario::Vecindario(){
    valorEntero = 0;
    frecuencia = 0;
    listaO();
}

Vecindario::Vecindario(int valorEntero){
    this->valorEntero = valorEntero;
    frecuencia = 0;
    listaO();
}

Vecindario::Vecindario(int valorEntero, Lista::Iterador& i, int cantidadLeer){
    this->valorEntero = valorEntero;
    this-> listaO::Iterador.i
    this->numeroVecinos = cantidadLeer;
}

Vecindario::Vecindario(int valorEntero, int*v, int cantidadLeer){
    this->valorEntero = valorEntero;
    this-> *v = 
    this->numeroVecinos = cantidadLeer;
}

Vecindario::~Vecindario(){

}

Vecindario::&insertar(Lista::Iterador & i, int elemento){
    frecuencia++;

}

Vecindario::& insertar(int*v, int elemento){
    frecuencia++;

} 


