#include "Propietario.h"
#include <iostream>

using namespace std;

Propietario::Propietario(const char* nombre){
    name = nombre;
     cout<<"Nuevo Propietario:"<<name<<endl;
}

Propietario::~Propietario(){
    //cout<<"El propietario atropelló al perro"<<endl;
    cout<<"Se murio el propietario: "<<name<< endl;
}
