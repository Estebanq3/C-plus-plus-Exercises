#ifndef _MATRIZ
#define _MATRIZ
#include<iostream>
using namespace std;

class Matriz {

   // METODOS AMIGOS DAN PERMISO AL OSTREAM E ISTREAM PARA IMPRIMIR Y LEER

   friend ostream& operator<<( ostream& salida, const Matriz & matriz){
      return matriz.imprimir(salida);
   }
   friend istream& operator>>( istream& entrada, Matriz & matriz) {
      return matriz.leer(entrada);
   }

   // ESTOS METODOS NO SON MIEMBROS DE LA CLASE

   private:
     char * * mPtr;
     int filas;
     int columnas;

     void _pedirMemoria(int,int);
     void _liberarMemoria();
     void _init(int,int);
     void _rellenarCeldas(char);
     void _copiar(char * * const);
     ostream& imprimir(ostream&) const;
     istream& leer(istream&);

   public:
     Matriz();               // Constructor por omisión
     Matriz(int);            // Constructor matriz MxM
     Matriz(int,int);        // Constructor matriz f x c
     Matriz(const Matriz &); // Constructor por copia 
                             // Regla de 3 --
                             // -Si hago constructor de copia debo tener operator= y destructor
    ~Matriz();
     Matriz & operator=( const Matriz & ); // Le cae encima a una matriz con otra
     
     char get(int,int);      // retorna el char ubicado en fila columna
     void set(int,int,char);      // coloca en fila columna el valor del char
};




#endif
