#ifndef _M
#define _M
class Matriz {
   private:
      char * * mPtr;
      int filas;
      int columnas;

   public:
      Matriz(int,int);
     ~Matriz();
      void setValor(int,int,char);
      char getValor(int,int);
      int getFilas();
      int getColumnas();
      void imprimir();
};

#endif
