#ifndef _LISTA_ITER
#define _LISTA_ITER
#include<iostream>
using namespace std;

class Lista {

   friend class Iterador;
   
   friend ostream & operator<<(ostream & salida, Lista lista){
      Lista::Iterador i = lista.begin(); 
      Lista::Iterador elFin = lista.end();
      while( i!= elFin){
        salida << *i << " ";
        ++i;
      }
      salida << endl;
      return salida;       
   }

   private:

      class Celda {
         public:
            int elemento;
            Celda * anterior;
            Celda * siguiente;
            Celda(int);
      };

      Celda * primera;
      Celda * ultima;

   public:
      class Iterador {
         friend class Lista;
         private:
            Celda * actual;
            Iterador(Celda *);
         public:
            Iterador();
            Iterador(const Iterador & ); 
            Iterador& operator=(const Iterador&);
            Iterador& operator++(); // ++iter Gilbert
            Iterador operator++(int noSeUsa); //
            // iter++ retorna copia del valor anterior
            Iterador& operator--(); // --iter Eyson
            Iterador operator--(int); // iter-- Eyson
            int operator==(Iterador &); // i==j Keylor
            int operator!=(Iterador &); // i==j Keylos
            int & operator*();  // Luis Bolaños Oscar Navarro
            int getValor();
            // referencia al elemento

      };
      Lista();  		// Emmanuel Z.
      Lista(const Lista &);     // Emmanuel Z.
      Lista(int, int *);        // Jose recibe n=3 {7,-1,4} 
      Lista(Lista::Iterador &, Lista::Iterador &); // Vale Fonseca copia de un fragmento  
      ~Lista();                 // Sirlany
      Lista & push_back(int);   // Pablo Otárola
      Lista & push_front(int); 
      int pop_front();          
      int pop_back();           
      Lista & insertar( Lista::Iterador &, int ); 
      Lista & borrar( Lista::Iterador &);
      Lista::Iterador buscar( int );
      Lista::Iterador begin();       
      Lista::Iterador end(); 
};
#endif
