#include "Lista.h"

Lista::Celda::Celda(int elemento, int frecuencia){
   this->elemento = elemento;
   this-> frecuencia = frecuencia;
   this->anterior = 0;
   this->siguiente =0;
}


//METODOS ITERADOR
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



//METODOS LISTA 

Lista::Lista() {
   primera = 0;
   ultima = 0;
}


Lista::Lista(const Lista & otra) {
   primera=0;
   ultima=0;
   Celda * actual = otra.primera;
   while(actual){
      this->insertar( actual->elemento);
      actual = actual -> siguiente;
   }       
}


//inserta una cantidad de valores al inicio, cantidad n y vector con los valores
Lista::Lista(int cantidadDeValores, int * v){
   primera=0;
   ultima=0;
   for(int i=0; i < cantidadDeValores; ++i){
      this->insertar( v[i] ); // *(v + i)equivale a v[i]
   }
}



//DESTRUCTOR
Lista::~Lista() {
   Celda * victima;
   while(ultima){
      victima = ultima;
      ultima = ultima->anterior;
      delete victima;
   }
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


Lista& Lista::insertar(int elemento){
    Iterador inicio = this->begin();
    Iterador fin = this->end();
    
    if(this->buscar(elemento)){
        i.actual->frecuencia = ++frecuencia;
    }
    else{
        while(i!=fin && (*i<elemento) ){
        ++i;
        }
        Celda * nueva = new  Celda(elemento,1);
        nueva -> siguiente = i.actual->anterior;
        nueva -> anterior = i.actual->anterior->siguiente;
        i.actual->anterior->siguiente = nueva;
        i.actual->anterior = nueva;
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

int Lista::Iterador::getFrecuencia(){
    int frecuencia= 0;
    if(this->end()){
        frecuencia = 0;
    }
    else{
        this->actual.frecuencia;
    }
    return frecuencia;
}

Lista::Iterador Lista::buscar(int buscado){
   Iterador i = this->begin();
   Iterador fin = this->end();
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







