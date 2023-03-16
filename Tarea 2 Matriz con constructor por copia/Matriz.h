#ifndef _M
#define _M
using namespace std;

class Matriz {
   private:
      char * * mPtr;
      int filas;
      int columnas;

   public:
      Matriz(int,int);
      Matriz( Matriz & ); // constructor por copía
     ~Matriz();
      void setValor(int,int,char);
      char getValor(int,int);
      int getFilas();
      int getColumnas();
      void imprimir();
};

#endif
