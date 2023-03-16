#include "ListaO.h"

// IMPLEMENTACION DE LA CELDA DE LISTA Lista::Celda
int retorno0 = 0; //variable 
ListaO::Celda::Celda(int elemento){
   this->elemento = elemento;
   frecuencia= 1;
   this->anterior = 0;
   this->siguiente =0;
}   


// IMPLEMENTACION DE LA CLASE ITERADOR DE LISTA Lista::Iterador

ListaO::Iterador::Iterador(Celda * actual){
   this->actual = actual;
}

ListaO::Iterador::Iterador(){
   actual = 0;
}

ListaO::Iterador::Iterador(const ListaO::Iterador & otro){
   this->actual = otro.actual;
}

ListaO::Iterador& ListaO::Iterador::operator=(const ListaO::Iterador& otro)  {
   this->actual = otro.actual;
   return *this;
} 

//++iterador           
ListaO::Iterador& ListaO::Iterador::operator++(){
     if(actual){	
        actual = actual->siguiente;
     }
     return *this;
}

//iterador++
ListaO::Iterador ListaO::Iterador::operator++(int noSeUsa){
   Iterador viejo(*this);
   if(actual){
      actual = actual->siguiente;
   }
   return viejo;
}           

ListaO::Iterador& ListaO::Iterador::operator--(){
  if(actual){
    this->actual = actual->anterior;
  }
  return *this; 
}


ListaO::Iterador ListaO::Iterador::operator--(int noSeUsa){
   Iterador viejo( *this );
   actual = actual->anterior;
   return viejo;
}



int ListaO::Iterador::getFrecuencia(){
   int frecuenciaLocal=0;
   if(actual != nullptr){
	     frecuenciaLocal=actual->frecuencia;
   }
   else{
   	 frecuenciaLocal= 0;
   }
   return frecuenciaLocal;
}

int ListaO::Iterador::getValor(){
   int valor = 0;
   if(actual != nullptr){
        valor = actual->elemento;
   }
   else{
       valor= 0;
   }
   return valor;
}



/*int& Lista::Iterador::getFrecuencia(){
   
   return actual->frecuencia;
}
*/


int ListaO::Iterador::operator==(ListaO::Iterador & otro){
   return  (this->actual == otro.actual);
} 

int ListaO::Iterador::operator!=(ListaO::Iterador & otro){
   return  (this->actual != otro.actual);
} 
        
int ListaO::Iterador::operator*(){
   return actual->elemento;
}
 
// METODOS DE LA LISTA
// CONSTRUCTOR POR OMISION
ListaO::ListaO() {
   primera = 0;
   ultima = 0;
}

ListaO::ListaO(const ListaO & otra) {
   primera=0;
   ultima=0;
   Celda * actual = otra.primera;
   while(actual){
      this->push_back( actual->elemento);
      actual = actual -> siguiente;
   }       
}

// Recibe n=3 {7,-1,4}
ListaO::ListaO(int cantidadDeValores, int * v){
   int temporal = 0;
   primera=0;
   ultima=0;
   for (int i =0; i<cantidadDeValores;++i){
      for(int j=0; j<cantidadDeValores-1;j++){
         if(v[i]<v[j]){
            temporal=v[i];
            v[i]= v[j];
            v[j]= temporal;
         }
      }
   }
   for(int i=0; i < cantidadDeValores; ++i){
      this->push_back( v[i] ); // *(v + i)equivale a v[i]

   }


}

//Lista& Lista::insertar( Iterador & i, int elemento ){
ListaO& ListaO::insertarOrdenado(int elemento) {
   int elementoEncontrado= 0;
   
   int mayorEncontrado = 0;
   int menorEncontrado = 0;
   
   Iterador inicio = this->begin();
   Iterador fin = this->end();

   if(!ultima){
      Celda * nueva = new Celda(elemento);
      if(!primera){ //Si no hay primera
      primera = nueva;
      ultima = nueva;
      }
      elementoEncontrado=1;
      //cout<<"Agrego 3"<<endl;
   }else{
      for(inicio=this->begin(); inicio!=fin ; inicio++){
         if(*inicio == elemento){
            //cout<<"Aumentando Frecuencia de elemento encontrado: "<< *inicio<<endl;
            elementoEncontrado=1;
            inicio.actual->frecuencia++;
         }
      }

      if(!elementoEncontrado){ //elemento a añadir no encontrado en la lista
         //cout<<"Agregando nuevo elemento:"<< elemento<<endl;
         if(*(inicio=this->begin())> elemento){
            this->push_front( elemento );
            menorEncontrado=1;
         }
         else{
            for(inicio=this->begin();inicio!=fin; inicio++){ //for que busca elementos mayores al que se quiere agregar
               if(*inicio>elemento && !mayorEncontrado){ //encontró un elemento mayor que el
                  mayorEncontrado = 1;
                  elementoEncontrado=1;
                     //cout<< "Iterador apuntando a:"<< *inicio <<",mayor que elemento a anadir"<<endl;
                     mayorEncontrado=1;
                     Celda * nueva = new  Celda(elemento);
                     nueva -> siguiente = inicio.actual->anterior->siguiente;
                     nueva -> anterior = inicio.actual->anterior;
                     inicio.actual->anterior->siguiente = nueva;
                     inicio.actual->anterior = nueva;
               }  
            }
         }
         if(!elementoEncontrado && !menorEncontrado){
            this->push_back( elemento );
         }
         
      }
   }
   return *this;
}



ListaO::ListaO(ListaO::Iterador & a, ListaO::Iterador & b) {
   primera=0;
   ultima=0;
   for(Iterador i(a); i!=b ; ++i){
      if(i.actual){
         push_back( *i );
      }
   }
}

ListaO::~ListaO() {
   Celda * victima;
   while(ultima){
      victima = ultima;
      ultima = ultima->anterior;
      delete victima;
   }
}

ListaO & ListaO::push_back(int numero){
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

ListaO & ListaO::push_front(int elemento){
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

int ListaO::pop_front(){
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


int ListaO::pop_back(){
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


ListaO& ListaO::borrar( ListaO::Iterador & i){
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


ListaO::Iterador ListaO::buscar(int buscado){
   Iterador i = this->begin();
   Iterador fin;
   while(i!=fin && (*i != buscado) ){
      ++i;
   }
   return i;
}

ListaO::Iterador ListaO::begin(){
   Iterador inicio( primera );
   return inicio;
}

ListaO::Iterador ListaO::end(){
   Iterador fin;
   return fin;
}


