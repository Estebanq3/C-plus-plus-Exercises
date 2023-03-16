#include "Perro.h"
#include "Propietario.h"
#include <iostream>

using namespace std;
//En este programa lo que se produce es la creación de un puntero perro que queda señalando al propietario Juanito, el cual una vez muere se lleva consigo al objeto perro.
int main(){
    Perro bruno;
	Propietario * p = new Propietario("Juanito");
	bruno.setPropietario(p);
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
	Propietario * p = new Propietario('j');
	bruno->setPropietario(p);
	return 0;
	*/