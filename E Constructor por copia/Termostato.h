#ifndef _TERMO
#define _TERMO
#include<iostream>
using namespace std;
class Termostato {
   private:
      double temperatura;
   public:
      Termostato(); // CONSTRUCTOR POR OMISION
      Termostato(double);  // CONSTRUCTOR CON PARAMETROS
      Termostato(Termostato & ); // CONSTRUCTOR POR COPIA
      ~Termostato();
      ostream & imprimir(ostream &);
      double getTemperatura();
      void setTemperatura(double);
};
#endif





