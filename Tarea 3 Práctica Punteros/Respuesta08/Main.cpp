#include "Perro.h"
#include "Propietario.h"
#include <iostream>

using namespace std;
//En este programa lo que sucede es que nace un perro que le apunta a propietario, luego nace otro perro que también le apunta a propietario, sin embargo, cuando este nace, propietario ya ha muerto, por lo tanto el segundo perro reclama la memoria de propietario de nuevo
//por lo tanto 
int main(){
	Perro * bruno = new Perro();
	bruno->setPropietario(new Propietario("Juanito"));
	Perro rosco = *bruno;
	delete bruno;
}

/*Perro * bruno = new Perro();
	bruno->setPropietario(new Propietario("Juanito"));
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