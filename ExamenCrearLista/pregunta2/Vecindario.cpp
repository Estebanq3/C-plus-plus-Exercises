#include "Vecindario.h"
#include "ListaO.h"
#include "Lista.h"
using namespace std;


//CONSTRUCTORES
Vecindario::Vecindario(){ //constructor por omision
    this->valorEntero = 0;
    this->frecuencia = 0;
    ListaO listaVecinos();
}

Vecindario::Vecindario(int valor){ //constructor con parametro int valor
    this->valorEntero = valor;
    this->frecuencia = 0;
    ListaO listaVecinos(); 
}


Vecindario::Vecindario(int valor, Lista::Iterador& iterador, int cantidadVecinos){ //constructor con lista como parametro
	this->valorEntero = valor;
	this->frecuencia = 1;
	for(int i =0; i<cantidadVecinos; i++){
		this->listaVecinos.insertarOrdenado(iterador.getValor());
		++iterador;
	}
	cout<<"Construccion terminada"<<endl;
}

Vecindario::Vecindario(int valor, int* vecinosPtr, int cantidadVecinos){ //constructor con puntero a vector como parametro
	this->valorEntero = valor;
	this->frecuencia = 1;
	for(int i=0;i<cantidadVecinos;i++){
        this->listaVecinos.insertarOrdenado(*(vecinosPtr+i));

    } 
    cout<<"Construccion terminada"<<endl;
}


//METODOS INSERTAR
Vecindario & Vecindario:: insertar(Lista::Iterador& iterador, int cantidadVecinos){
	cantidadVecinos++;
	for(int i =0; i<cantidadVecinos; i++){
		this->listaVecinos.insertarOrdenado(iterador.getValor());
		++iterador;
	}
	++frecuencia;

	return *this;
}

Vecindario & Vecindario:: insertar(int *vecinosPtr, int cantidadVecinos){
	for(int i=0;i<cantidadVecinos;++i){
        this->listaVecinos.insertarOrdenado(*(vecinosPtr+i));

    } 
    ++frecuencia;

    return *this;
}


//GETS
int Vecindario::getFrecuenciaValor(){
	return frecuencia;
}

int Vecindario::getValor(){
	return valorEntero;
}

int Vecindario::getVecinos(int vecino){
	int vecinoRetornado = 0;
	int frecuencia = 0;
	ListaO::Iterador iterFin;
	iterFin = listaVecinos.end();
	for(ListaO::Iterador iterador = listaVecinos.begin(); iterador!= iterFin; iterador++){
   		if(*iterador == vecino){
   			vecinoRetornado = *iterador;
   			frecuencia = iterador.getFrecuencia();
   		}
   }

	return vecinoRetornado;
}

int Vecindario::getFrecuenciaVecinos(int vecino){
	int frecuencia = 0;
	ListaO::Iterador iterFin;
	iterFin = listaVecinos.end();
	for(ListaO::Iterador iterador = listaVecinos.begin(); iterador!= iterFin; iterador++){
   		if(*iterador == vecino){
   			frecuencia = iterador.getFrecuencia();
   		}
   }

	return frecuencia;
}



//IMPRIMIR
ostream& Vecindario::imprimir(ostream& salida){
	ListaO::Iterador iterFin;
	iterFin = listaVecinos.end();


   salida << "Valor: "<< getValor() <<endl;
   salida<< "Frecuencia del valor: " << getFrecuenciaValor() << endl;
   salida<< "Vecinos: "<< endl;
   for(ListaO::Iterador iterador = listaVecinos.begin(); iterador!= iterFin; iterador++){
   		salida<< "Valor: " << *iterador << " Frecuencia :" << iterador.getFrecuencia()<<endl;
   }
   return salida;
}





 









