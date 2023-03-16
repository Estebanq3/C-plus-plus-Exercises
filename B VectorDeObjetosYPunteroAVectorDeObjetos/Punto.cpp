#include "Punto.h"

#include<iostream>
using namespace std;

Punto::Punto(){
   cout << "CONSTRUCTOR POR OMISION" << endl;
   x = 0;
   y = 0;
}

Punto::Punto(int x,int y){
   cout << "CONSTRUCTOR CON PARAMETROS ("<< x << ","<< y <<")"<<endl;
   this->x = x;
   this->y = y;
}

Punto::~Punto(){
   cout << "VA A MORIR EL PUNTO ("<< x << ","<< y <<")"<<endl;
}

void Punto::imprimir(){
   cout << "("<< x << ","<< y <<")"<<endl;
}
