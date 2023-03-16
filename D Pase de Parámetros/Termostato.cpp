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

Termostato::~Termostato(){
   cout << "DESTRUCTOR DE TERMOSTATO "<< temperatura << endl;
}

void Termostato::imprimir(){
  cout << "Temperatura: "<< temperatura << endl;
}
      
double Termostato::getTemperatura(){
   return temperatura;
}
      
void Termostato::setTemperatura(double temperatura){
   this->temperatura = temperatura;
}





