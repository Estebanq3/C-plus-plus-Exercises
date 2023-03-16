#ifndef _LISTAO
#define _LISTAO
#include<iostream>
using namespace std;

//Clase lista: mediante esta clase creamos una lista ordenada doblemente enlazada, la cual tiene un iterador, que permite recorrer al contenedor lista.
//Un iterador sigue una ruta y da acceso a elementos de datos del contenedor, pero no realiza iteración (es decir, no tiene total libertad, como sugiere su terminología). 
//Un iterador se comporta como el cursor de una base de datos.

class ListaO {

   friend class Iterador; //mediante esa linea permitimos que la clase lista pueda acceder a las funciones miembro pivadas y protegidas de la clase iterador
   
   friend ostream & operator<<(ostream & salida, ListaO listaO){ //este operador sobrecargado nos permite imprimir la lista
      ListaO::Iterador i = listaO.begin(); 
      ListaO::Iterador elFin = listaO.end();
      while( i!= elFin){
        salida << *i << " ";
        ++i;
      }
      salida << endl;
      return salida;       
   }

   private:

      class Celda { //clase celda que tiene un elemento y una frecuencia
         public:
            int elemento; //valor
            int frecuencia; //frecuencia del valor
            Celda * anterior; //para enlazaz doblemente la lista
            Celda * siguiente;
            Celda(int);
      };

      Celda * primera;
      Celda * ultima;

   public:
      class Iterador { //clase iterador, el cual resulta ser un tipo de puntero a la lista, nos permite movernos por la misma y utilizar una serie de metodos para obtener informacion de la misma, solo que modificarla no puede
         friend class ListaO; //permitimos que el iterador pueda acceder a los miembros publicos y privados de la lista
         private:
            Celda * actual; //celda actual del iterador
            Iterador(Celda *);
         public:
            Iterador(); //constructor por defecto
            Iterador(const Iterador & ); //constructor por copia del iterador
            Iterador& operator=(const Iterador&); //operador de asignacion
            Iterador& operator++(); // operador de postdecremento
            Iterador operator++(int noSeUsa); //no se usa, solo retorna una copia
            // iter++ retorna copia del valor anterior
            Iterador& operator--(); // --iter 
            Iterador operator--(int);
            int getFrecuencia(); // iter-- 
            int getValor();
            int operator==(Iterador &); // i==j 
            int operator!=(Iterador &); // i==j 
            int operator*(); 
            // copia del elemento, solo que mediante este operador no se puede modificar los elementos de la lista, solo se retorna una copia

      };

      ListaO(); //constructor por defecto de la lista
      ListaO(const ListaO &); //constructor por copia de la lista
      ListaO(int, int *); //constructor con dos parametros int, int*
      ListaO & insertarOrdenado(int); //metodo insertar creado para insertar nuevos elementos en cualquier posicion de forma ordenada sin alterar el orden de la lista
      ListaO(ListaO::Iterador &, ListaO::Iterador &);//copia de un fragmento  
      ~ListaO();//destructor de lista          
      ListaO & push_back(int); //metodo para agregar un elemento nuevo al final de la lista  
      ListaO & push_front(int); //metodo para agregar un elemento nuevo al inicio de la lista
      int pop_front();//metodo que elimina el primer elemento de la lista     
      int pop_back();//metodo que elimina el ultimo elemento de la lista
      ListaO & insertar( ListaO::Iterador &, int );//metodo por defecto de la lista del profesor para insertar, mas no se usa. 
      ListaO & borrar( ListaO::Iterador &);//metodo para borrar una celda de la lista, eliminando a la victima seleccionada
      ListaO::Iterador buscar( int );//metodo para buscar un elemento especifico en la lista
      ListaO::Iterador begin();//inicio de la lista  
      ListaO::Iterador end();//final de la lista

};
#endif
