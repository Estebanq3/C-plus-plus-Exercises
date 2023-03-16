#ifndef _Perro
#define _Perro
#include "Propietario.h"

class Perro{
    public:
    Perro(); // constructor por omision
    ~Perro();
    void setPropietario(Propietario*);


    private:
    Propietario *propietario;
};
#endif