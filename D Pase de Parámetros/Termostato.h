#ifndef _TERMO
#define _TERMO
class Termostato {
   private:
      double temperatura;
   public:
      Termostato();
      Termostato(double);
      ~Termostato();
      void imprimir();
      double getTemperatura();
      void setTemperatura(double);
};
#endif





