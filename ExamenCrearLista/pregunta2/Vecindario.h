#ifndef _VECINDARIO
#define _VECINDARIO

#include "Lista.h"
#include "ListaO.h"

 
class Vecindario{

    friend ostream & operator<<(ostream & salida, Vecindario & vecindario){  //operador sobrecargado para imprimir el vecindario
        return vecindario.imprimir(salida);       
    }

    private:
        int valorEntero; 
        int frecuencia; //frecuencia del valor entero. De acuerdo a las listas donde esta presente.
        ListaO listaVecinos;

    public:
    Vecindario(); //constructor por omisión
    Vecindario(int); //constructor con parámetro int(valor), lista vacia
    Vecindario(int,Lista::Iterador& ,int);//constructor con int(valor), objeto lista con iterador, y N(cantidad de vecinos a leer)
    Vecindario(int,int*,int);// constructor con int(valor), un puntero a un vector y N(cantidad de vecinos)
    Vecindario & insertar(Lista::Iterador&,int);//metodo insertar con lista como parametro, apunta al primero de una secuencia de valores, ademas int representa el numero de vecinos
    Vecindario & insertar(int*, int);//metodo insertar con un puntero a entero, int* que apunta al vector de vecinos, el ultimo parametro representa el numero de vecinos

    int getVecinos(int);//get del valor de un vecino
    int getFrecuenciaVecinos(int);//get de la frecuencia de un vecino

    int getFrecuenciaValor(); //frecuencia del valor entero
    int getValor(); //get de valor entero
    ostream& imprimir(ostream &);//metodo imprimir para observar el contenido del objeto vecindario


};


#endif