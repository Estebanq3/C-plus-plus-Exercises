#include "Perro.h"
#include "Propietario.h"
#include <iostream>

using namespace std;

int main(){
	Perro bruno;
	bruno.setPropietario(new Propietario("Juanito"));
	Perro rosco = bruno;
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
	Propietario * p = new Propietario('j');
	bruno.setPropietario(p);
	*/



/*Perro * bruno = new Perro();
	Propietario * p = new Propietario('j');
	bruno->setPropietario(p);
	return 0;
	*/