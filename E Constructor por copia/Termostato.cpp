#include "Termostato.h"
#include<iostream>
using namespace std;

Termostato::Termostato(){
   cout << "CONSTRUCTOR TERMOSTATO POR OMISION"<< endl;
   temperatura = 0.0;
}

Termostato::Termostato(double temperatura){
   cout << "CONSTRUCTOR TERMOSTATO CON PARAMETRO "<< temperatura<< endl;
   this->temperatura = temperatura;
}

Termostato::Termostato( Termostato & otro){
   cout << "CONSTRUCTOR POR COPIA " << otro.temperatura<< endl;
   this->temperatura = otro.temperatura;
}

Termostato::~Termostato(){
   cout << "DESTRUCTOR DE TERMOSTATO "<< temperatura << endl;
}

ostream & Termostato::imprimir(ostream & salida){
  salida << "Temperatura: "<< temperatura << endl;
  return salida;
}
      
double Termostato::getTemperatura(){
   return temperatura;
}
      
void Termostato::setTemperatura(double temperatura){
   this->temperatura = temperatura;
}





