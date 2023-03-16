#include "Termostato.h"
#include "Simulador.h"
#include<iostream>
using namespace std;

Termostato Simulador::subeCopia( Termostato termostato){
  cout << "COPIA "<< endl;
  cout << "AL ENTRAR "<< endl;
  termostato.imprimir();
  termostato.setTemperatura( termostato.getTemperatura() + 1);
  cout << "ANTES DE SALIR "<< endl;
  termostato.imprimir(); 
  return termostato;
}

Termostato & Simulador::subeReferencia( Termostato & termostato){
  cout << "REFERENCIA "<< endl;
  cout << "AL ENTRAR "<< endl;
  termostato.imprimir();
  termostato.setTemperatura( termostato.getTemperatura() + 1);
  cout << "ANTES DE SALIR "<< endl;
  termostato.imprimir();
  return termostato;
}

Termostato * Simulador::subePuntero( Termostato * termostatoPtr){
  cout << "PUNTERO "<< endl;
  cout << "AL ENTRAR "<< endl;
  termostatoPtr->imprimir();
  termostatoPtr->setTemperatura( termostatoPtr->getTemperatura() + 1);
  cout << "ANTES DE SALIR "<< endl;
  termostatoPtr->imprimir();
  return termostatoPtr;
} 
