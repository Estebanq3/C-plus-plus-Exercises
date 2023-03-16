#include "Matriz.h"
#include<iostream>
using namespace std;

void Matriz::_pedirMemoria(int filas,int columnas){
   this->filas = 0;
   this->columnas = 0;
   mPtr = 0; // el puntero es NULO porque tiene un 0

   if(filas>0 && columnas>0) {
      this->filas = filas;
      this->columnas = columnas;
      mPtr = new char * [filas];
      for(int f=0; f < filas; ++f){
         mPtr[f] = new char [columnas];
      }
   }
}

void Matriz::_liberarMemoria(){
   for(int f = filas-1; f >= 0 ; --f){
      delete [] mPtr[f];
   }
   delete [] mPtr;
   this->filas = 0;
   this->columnas = 0;
   mPtr = 0;
}

void Matriz::_init(int filas,int columnas){
   _pedirMemoria(filas,columnas);
   _rellenarCeldas('_');
}

void Matriz::_rellenarCeldas(char valor){
   for(int f=0; f < filas; ++f){
      for(int c=0; c < columnas; ++c){
         mPtr[f][c] = valor;
      }
   }
}

void Matriz::_copiar(char * * const mPtr2){
   for(int f=0; f < filas; ++f){
      for(int c=0; c < columnas; ++c){
         mPtr[f][c] = mPtr2[f][c];
      }
   }
}

ostream& Matriz::imprimir(ostream& salida) const {
   for(int f=0; f < filas; ++f){
      for(int c=0; c < columnas; ++c){
         salida << mPtr[f][c] << " ";
      }
      salida << endl;
   }
   salida << endl;
   return salida;
}
     
istream& Matriz::leer(istream& entrada){
   for(int f=0; f < filas; ++f){
      for(int c=0; c < columnas; ++c){
         entrada >> mPtr[f][c];
      }
   }
   return entrada;
}


Matriz::Matriz(){
  _init(0,0);
}

     
Matriz::Matriz(int n){
  _init(n,n);
}
     
Matriz::Matriz(int filas,int columnas){
   _init(filas,columnas);
}

Matriz::Matriz(const Matriz & otra){
   _pedirMemoria(otra.filas, otra.columnas);
   _copiar(otra.mPtr);
}

Matriz::~Matriz(){
   if(mPtr){
      _liberarMemoria();
   }
}


Matriz & Matriz::operator=( const Matriz & otra){
   if( this != &otra){
      if(filas==otra.filas && columnas==otra.columnas){
         _copiar(otra.mPtr);
      }
      else {
         if(mPtr){
           _liberarMemoria();
         }
         _pedirMemoria( otra.filas,otra.columnas);
         _copiar(otra.mPtr);
      }
   }
   return *this;
}


char Matriz::get(int f,int c){
    char resp = '\0';
    if(f>=0 && f< filas && c >= 0 && c < columnas){
       resp = mPtr[f][c];
    }
    return resp;
}

void Matriz::set(int f,int c,char valor){
    if(f>=0 && f< filas && c >= 0 && c < columnas){
        mPtr[f][c] = valor;
    }
}
