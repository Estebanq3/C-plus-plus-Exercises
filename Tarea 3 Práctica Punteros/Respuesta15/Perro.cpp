#include "Perro.h"
#include"Propietario.h"
#include <iostream>

using namespace std;

Perro::Perro(){	
	cout<<"Perro ha nacido:"<<endl;
}
Perro::~Perro(){
    if(propietario!=0){
        delete propietario; 
    }
   cout<<"Perro ha muerto"<<endl; 
        
}
void Perro::setPropietario( Propietario*propietario){
    propietario = propietario;
}

