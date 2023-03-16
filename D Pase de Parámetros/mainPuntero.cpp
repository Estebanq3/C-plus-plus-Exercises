#include "Simulador.h"
#include "Termostato.h"
#include <iostream>
using namespace std;

int main(){
   Simulador simulador;

   Termostato termo(32.5);

   Termostato * resultadoPtr;

   cout<< "ANTES DE ENTRAR: Termostato tiene valor:"<< endl;
   termo.imprimir();

   resultadoPtr  = simulador.subePuntero( &termo );

   cout<< "DESPUES DE SALIR: Termostato tiene valor:"<< endl;
   termo.imprimir();

   cout << "RESULTADO"<< endl;
   resultadoPtr->imprimir();
   return 0;
}
