#include "ListaO.h"
#include "Lista.h"
#include "Vecindario.h"
#include<iostream>
using namespace std;

int main(){
   
   /*int v[] = {-10,8,14,4,2};
   int c[] = {-10,-100,14,5,7};
   */
   int v[] = {28, 11, 68, 56, 86};
   int z[] = {28, 68, 86, 91, 92};
   int x[] = {68, 86, 91, 92, 6};
   int y[] = {6, 10, 11, 28, 30};
   


   Vecindario vecindario(2, (int *)v ,5);
   
   cout<< vecindario << endl;
   cout<<"Construccion terminada"<<endl;
   
	/*vecindario.insertar((int *) c, 5);*/

   vecindario.insertar((int*) z, 5);
   cout<< vecindario << endl;

   vecindario.insertar((int*) x, 5);
   cout<< vecindario << endl;

   vecindario.insertar((int*) y, 5);
   cout<< vecindario << endl;

   cout<< "Valor obtenido :" << vecindario.getVecinos(11) << "  Frecuencia del vecino: "<< vecindario.getFrecuenciaVecinos(11) << endl;
   
   return 0;
}
