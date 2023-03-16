#ifndef _RACIONAL
#define _RACIONAL

#include<iostream>
using namespace std;

class Racional {

   friend ostream&  imprimir(ostream& salida, Racional & racional){
      return racional.imprimir(salida);
   }

   friend istream& leer(istream& entrada, Racional & racional){
      return racional.leer(entrada);
   }

   private:
      int nume;
      int deno;

      Racional & simplificar();
      int mcd(int,int);
   public:
      Racional();
      Racional(int);
      Racional(int,int);
      Racional(const Racional &);
      Racional & preIncremento();
      Racional posIncremento();
      Racional mas(const Racional & );
      Racional menos(const Racional & );
      Racional por( const Racional & );
      Racional entre( const Racional & );
      istream & leer(istream& );
      ostream & imprimir(ostream& );
      Racional & asignar(const Racional &);
      int esIgualA(const Racional &);
};

#endif 
