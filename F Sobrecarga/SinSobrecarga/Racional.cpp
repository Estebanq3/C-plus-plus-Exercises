#include "Racional.h"
#include<iostream>
using namespace std;

Racional & Racional::simplificar(){
  int divisor = mcd(nume,deno);
  nume = nume / divisor;
  deno = deno / divisor;
  if(deno < 0){
     nume*=-1;
     deno*=-1;
  }
  return *this;
}

int Racional::mcd(int a,int b){
   int resp = a;
   if(b!=0){
     resp= mcd(b, a % b);
   }
   return resp;
}

Racional::Racional(){
   nume = 0;
   deno = 1;
}

Racional::Racional(int nume){
   this->nume = nume;
   deno = 1;
}

Racional::Racional(int nume,int deno){
   if(deno==0){
     cerr << "Warning: denominador 0 no valido.. se convierte a 1"<< endl;
     deno = 1;
   }
   this->nume = nume;
   this->deno = deno;
   simplificar();
}

Racional::Racional(const Racional & otro){
   this->nume = otro.nume;
   this->deno = otro.deno;
}

// ++r
Racional & Racional::preIncremento(){
   nume+= deno;
   return *this;
}

// r++
Racional Racional::posIncremento(){
   Racional copia( *this );
   nume+= deno;
   return copia;
}

Racional Racional::mas(const Racional & otro){
   Racional suma;
   suma.nume =  this->nume * otro.deno + this->deno * otro.nume;
   suma.deno =  this->deno * otro.deno;
   suma.simplificar();
   return suma;
}

Racional Racional::menos(const Racional & otro){
   Racional resta;
   resta.nume =  this->nume * otro.deno - this->deno * otro.nume;
   resta.deno =  this->deno * otro.deno;
   resta.simplificar();
   return resta;
}

Racional Racional::por( const Racional & otro){
   Racional producto(this->nume * otro.nume , this->deno*= otro.deno);
   producto.simplificar();
   return producto;
}

Racional Racional::entre( const Racional & otro){
   Racional division(this->nume * otro.deno , this->deno * otro.nume);
   division.simplificar();
   return division;
}

istream & Racional::leer(istream& entrada){
   entrada >> nume;
   entrada >> deno;
   return entrada;
}

ostream & Racional::imprimir(ostream& salida){
   salida << nume;
   if( deno!= 1){
     salida << "/" << deno << " ";
   }
   return salida;
}

Racional & Racional::asignar(const Racional & otro){
   this->nume = otro.nume;
   this->deno = otro.deno;
   return *this;
}


int Racional::esIgualA(const Racional & otro){
  return this->nume == otro.nume && this->deno ==otro.deno;
}
