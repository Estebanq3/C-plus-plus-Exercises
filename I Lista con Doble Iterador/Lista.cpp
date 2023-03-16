#include "Lista.h"

// IMPLEMENTACION DE LA CELDA DE LISTA Lista::Celda
Lista::Celda::Celda(int elemento ){
   this->elemento = elemento;
   this->anterior = 0;
   this->siguiente =0;
}   


// IMPLEMENTACION DE LA CLASE ITERADOR DE LISTA Lista::Iterador

Lista::Iterador::Iterador(Celda * actual){
   this->actual = actual;
}

Lista::Iterador::Iterador(){
   actual = 0;
}

Lista::Iterador::Iterador(const Lista::Iterador & otro){
   this->actual = otro.actual;
}

Lista::Iterador& Lista::Iterador::operator=(const Lista::Iterador& otro)  {
   this->actual = otro.actual;
   return *this;
} 

//++iterador           
Lista::Iterador& Lista::Iterador::operator++(){
     if(actual){	
        actual = actual->siguiente;
     }
     return *this;
}

//iterador++
Lista::Iterador Lista::Iterador::operator++(int noSeUsa){
   Iterador viejo(*this);
   if(actual){
      actual = actual->siguiente;
   }
   return viejo;
}           

Lista::Iterador& Lista::Iterador::operator--(){
  if(actual){
    this->actual = actual->anterior;
  }
  return *this; 
}


Lista::Iterador Lista::Iterador::operator--(int noSeUsa){
   Iterador viejo( *this );
   actual = actual->anterior;
   return viejo;
}


int Lista::Iterador::operator==(Lista::Iterador & otro){
   return  (this->actual == otro.actual);
} 

int Lista::Iterador::operator!=(Lista::Iterador & otro){
   return  (this->actual != otro.actual);
} 
        
int& Lista::Iterador::operator*(){
   return actual->elemento;
}
 
// METODOS DE LA LISTA
// CONSTRUCTOR POR OMISION
Lista::Lista() {
   primera = 0;
   ultima = 0;
}

Lista::Lista(const Lista & otra) {
   primera=0;
   ultima=0;
   Celda * actual = otra.primera;
   while(actual){
      this->push_back( actual->elemento);
      actual = actual -> siguiente;
   }       
}

// Recibe n=3 {7,-1,4}
Lista::Lista(int cantidadDeValores, int * v){
   primera=0;
   ultima=0;
   for(int i=0; i < cantidadDeValores; ++i){
      this->push_back( v[i] ); // *(v + i)equivale a v[i]
   }
}

// Noten lo util que es tener sobrecarga de operadores en el iterador
Lista::Lista(Lista::Iterador & a, Lista::Iterador & b) {
   primera=0;
   ultima=0;
   for(Iterador i(a); i!=b ; ++i){
      if(i.actual){
         push_back( *i );
      }
   }
}

Lista::~Lista() {
   Celda * victima;
   while(ultima){
      victima = ultima;
      ultima = ultima->anterior;
      delete victima;
   }
}

Lista & Lista::push_back(int numero){
   Celda * nueva = new Celda(numero);
   if(!ultima) {
      primera = nueva;
      ultima = nueva;
   }
   else{
      ultima->siguiente = nueva;
      nueva->anterior =  ultima;
      ultima = nueva;
   }
   return *this;
}

Lista & Lista::push_front(int elemento){
   Celda * nueva = new Celda(elemento);
   if(!primera){ //Si no hay primera
      primera = nueva;
      ultima = nueva;
   }
   else{
      nueva->siguiente = primera;
      primera->anterior = nueva;
      primera = nueva;
   }
   return *this;
}

int Lista::pop_front(){
   int valor = 0;
   if(primera){
      Celda * victima = primera;
      valor = primera->elemento;
      primera = primera->siguiente;
      primera->anterior = 0;
      delete victima;
   }
   return valor;
}


int Lista::pop_back(){
   int valor = 0;
   if(ultima){ 
      Celda * victima = ultima;
      valor = ultima->elemento;
      ultima = ultima->anterior;
      ultima->siguiente = 0;
      delete victima;
   }
   return valor;
}

Lista& Lista::insertar( Iterador & i, int elemento ){
   Iterador inicio = this->begin();
   Iterador fin = this->end();
   if(i==inicio){
      this->push_front(elemento);
   }
   else{
      if(i==fin){
         this->push_back(elemento); 
      }
      else {
         Celda * nueva = new  Celda(elemento);
         nueva -> siguiente = i.actual->anterior;
         nueva -> anterior = i.actual->anterior->siguiente;
         i.actual->anterior->siguiente = nueva;
         i.actual->anterior = nueva;
      }
   }
   return *this;
}
      

Lista& Lista::borrar( Lista::Iterador & i){
   Celda * victima = i.actual;
   if(victima){
      ++i;
      if(victima==primera){
         pop_front();
      }
      else{
         if(victima==ultima){
            pop_back();
         }
         else {
            victima->anterior->siguiente = victima->siguiente;
            victima->siguiente->anterior = victima->anterior;
            delete victima;
         }
      }
   }
   return *this;
}


Lista::Iterador Lista::buscar(int buscado){
   Iterador i = this->begin();
   Iterador fin;
   while(i!=fin && (*i != buscado) ){
      ++i;
   }
   return i;
}


Lista::Iterador Lista::begin(){
   Iterador inicio( primera );
   return inicio;
}

Lista::Iterador Lista::end(){
   Iterador fin;
   return fin;
}

