#include "Simulador.h"
#include "Termostato.h"
#include <iostream>
using namespace std;

int main(){
   Simulador simulador;

   Termostato * termoPtr = new Termostato(32.5);

   Termostato * resultadoPtr;

   cout<< "ANTES DE ENTRAR: Termostato tiene valor:"<< endl;
   termoPtr->imprimir();

   resultadoPtr  = simulador.subePuntero( termoPtr );

   cout<< "DESPUES DE SALIR: Termostato tiene valor:"<< endl;
   termoPtr->imprimir();

   cout << "RESULTADO"<< endl;
   resultadoPtr->imprimir();
   
   delete termoPtr;
   return 0;
}
