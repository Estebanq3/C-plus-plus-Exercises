#include "Simulador.h"
#include "Termostato.h"
#include <iostream>
using namespace std;

int main(){
   Simulador simulador;

   Termostato termo(32.5);

   Termostato resultado;

   cout<< "ANTES DE ENTRAR: Termostato tiene valor:"<< endl;
   termo.imprimir();

   resultado  = simulador.subeReferencia( termo );

   cout<< "DESPUES DE SALIR: Termostato tiene valor:"<< endl;
   termo.imprimir();

   cout << "RESULTADO"<< endl;
   resultado.imprimir();
   return 0;
}
