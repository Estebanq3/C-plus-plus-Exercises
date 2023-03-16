#include "Perro.h"
#include "Propietario.h"
#include <iostream>

using namespace std;
//En este programa lo que ocurre es que se produce fuga de memoria, puesto que el objeto perro y propietario quedan en el heap (al hacer new) sin ser reclamados, no se hace ningún delete
int main(){
   Perro * bruno = new Perro();
	Propietario * p = new Propietario("Juanito");
	bruno->setPropietario(p);
	return 0; 
}

/*Perro * bruno = new Perro();
	bruno->setPropietario(new Propietario('j'));
	Perro rosco = *bruno;
	delete bruno;
*/

/*Perro bruno;
Propietario * p = new Propietario(“Juanito”);
bruno.setPropietario(p);
*/

/*Perro bruno;
	Propietario * p = new Propietario("Juanito");
	bruno.setPropietario(p);
	*/



/*Perro * bruno = new Perro();
	Propietario * p = new Propietario("Juanito");
	bruno->setPropietario(p);
	return 0;
	*/