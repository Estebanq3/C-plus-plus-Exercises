#include <iostream>
#include "Vecindario.h"
#include "ListaO.h"
#include "Lista.h"

#include<fstream>
#include<iostream>
using namespace std;

int main(){
	static const int VALORES = 100;
	static const int CANTIDADDEVECINOS = 5; //vecinos a leer

//LEER EL ARCHIVOP TXT, CREAR VECTOR QUE ALMACENA TXT Y GUARDAR TXT EN EL VECTOR
   ifstream contando("numeros2.txt"); 
   int longitud =0;
   int x = 0;
   while(!contando.eof()){
      contando >> x;
      longitud++;
   }
   

   Vecindario vecindario[VALORES]; //vecindarios para cada numero del 0 al 99
   int valoresLeidos[longitud-1];//vector que almacena el txt, longitud coniste en la longitud del archivo introducido

   //Leyendo y guardando txt en el vector
   ifstream entrada("numeros2.txt"); 
   int y = 0;
   int contador = 0;
   while(!entrada.eof()){
      entrada >> y;
      valoresLeidos[contador]= y;
      contador++;
   }


//CONSTRUIR VECINDARIOS DE CADA VALOR DEL 0 AL 99
int v[4]; //vector para insertar 5 vecinos
for(int i = 0; i<=5 ; i++){
   v[i]=-1;
}

for(int i = 0; i< VALORES; i++){
   cout<< "Valor : "<< i<<endl;

   for(int j = 0; j< longitud; j++){
		if(valoresLeidos[j]==i){
			if((j-5)>= 0){
					
            v[0] = valoresLeidos[j-5];
				v[1] = valoresLeidos[j-4];
				v[2] = valoresLeidos[j-3];
				v[3] = valoresLeidos[j-2];
				v[4] = valoresLeidos[j-1];
				
            cout<< "Vector de: "<< i<< " :";
            for(int b =0; b<5; b++){
               cout << v[b]<< " ";
            }
            cout<< endl;
            vecindario[i].insertar((int *)v, 5);
         }
				
		}
   }
   cout<< vecindario[i];
}



//SOLICITAMOS AL USUARIO EL VECINDARIO, es decir la secuencia de valores
int vUsuario[4];
cout<< "Digite los elementos del vecindario uno por uno: "<<endl;
for(int i = 0; i<=4; i++){
   cout<< "Vecino "<< i << ": ";
   int entrada = 0;
   cin>> entrada;
   vUsuario[i] = entrada; 
}


//METODO PARA BUSCAR VECINOS compartidos
double promedio = 1;
double promedioMayorTemporal = 0; 
double sumaConFrecuencias = 0;
double recomendado = 0;

for(int i = 0; i<VALORES; i++){ //viaja entre valores enteros 0-99

   cout<< "------------------------------------------------------------------------------"<<endl;
   cout<< "Vecindario: " << i <<endl;
   for(int j = 0; j<5; j++){ //viaja entre elementos de vUsuario buscando en listas 0-5
      if(vUsuario[j] == vecindario[i].getVecinos(vUsuario[j])){
         cout << "Vecino compartido: "<< vUsuario[j]<< " Frecuencia del vecino compartido: " << vecindario[i].getFrecuenciaVecinos(vUsuario[j]) <<endl; 
         sumaConFrecuencias += vecindario[i].getFrecuenciaVecinos(vUsuario[j]);
      }
   }
   

//IMPRIMO LA SUMA DE FRECUENCIAS DE UN VALOR ENTERO, SU FRECUENCIA
   cout<< "Datos del VALOR ENTERO: " << i <<endl;
   cout<< "Suma de las frecuencias de vecinos compartidos secuencia de user:  " <<sumaConFrecuencias<<endl; 
   cout<< "Frecuencia valor entero: "<< vecindario[i].getFrecuenciaValor()<<endl;
   if(sumaConFrecuencias != 0 && vecindario[i].getFrecuenciaValor() != 0){
      promedio = sumaConFrecuencias/vecindario[i].getFrecuenciaValor();
      cout<<"Promedio de VALOR ENTERO : " << i << ": " << promedio <<endl;
   }
   else{
      promedio = 0;
   }


//METODO QUE CALCULA EL PROMEDIO MAYOR
   if(i == 0 ){
      if(sumaConFrecuencias != 0 && vecindario[i].getFrecuenciaValor() != 0){
         promedioMayorTemporal = sumaConFrecuencias/vecindario[i].getFrecuenciaValor();
      }else{
         promedio = 0;
      }
   }else
   if(promedio > promedioMayorTemporal){
      promedioMayorTemporal = promedio;
      recomendado = i;
   }

   sumaConFrecuencias =0;
}


cout<< "\n-------------------------------PROMEDIO FINAL Y VALOR RECOMENDADO-------------------------------------------------"<<endl;
cout << "Valor recomendado: "<< recomendado << " Promedio del valor recomendado: "<< promedioMayorTemporal;


	return recomendado;
   
}
