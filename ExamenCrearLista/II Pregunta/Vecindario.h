#ifndef _VECINDARIO
#define _VECINDARIO
#include<iostream>
using namespace std;
#include "Lista.h"
#include "ListaO.h" 
//esta viene siendo Lista de la pregunta 1

friend ostream & operator<<(ostream & salida, Vecindario vecindario){  
    salida << "Valor Entero:" << valorEntero << "Frecuencia Valor: "<<
    frecuencia<< "Lista :"<<lista<< endl;
    return salida;       
}

class Vecindario{
    private:
        int valorEntero=0;
        int frecuencia = 0;
        ListaO lista;

    public:
    Vecindario(); //constructor por omisión
    Vecindario(int);
    Vecindario(int, Lista::Iterador&, int);
    Vecindario(int,int*,int);
    ~Vecindario();
    Vecindario & insertar(Lista::Iterador&,int);
    Vecindario & insertar(int*, int);



};


#endif