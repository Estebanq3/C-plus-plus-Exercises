#ifndef _RACIONAL
#define _RACIONAL

#include<iostream>
using namespace std;

class Racional {

   friend ostream&  operator<<(ostream& salida, Racional & racional){
      return racional.imprimir(salida);
   }

   friend istream& operator>>(istream& entrada, Racional & racional){
      return racional.leer(entrada);
   }

   private:
      int nume;
      int deno;

      Racional & simplificar();
      int mcd(int,int);
   public:
      Racional(); //constructor por omisión
      Racional(int);//constuctor con un parámetro
      Racional(int,int);//constrcutor con dos parámetros
      Racional(const Racional &); //constructor por copia
      Racional & operator++();
      Racional operator++(int); // x++ pos incremento
      Racional operator+(const Racional & );
      Racional operator-(const Racional & );
      Racional operator*( const Racional & );
      Racional operator/( const Racional & );
      istream & leer(istream& );
      ostream & imprimir(ostream& );
      Racional & operator=(const Racional &);
      int operator==(const Racional &);
};

#endif 
