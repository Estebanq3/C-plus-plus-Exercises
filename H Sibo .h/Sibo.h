#ifndef _SIBO
#define _SIBO
#include "Procesador.h"
#include "Memoria.h"
#include "Interfaz.h"

class Sibo
{
private:
    Procesador* procesador;
    Interfaz* interfaz;
    Memoria* memoria;
    const char* _cargarPrograma();
public:
    Sibo();
    ~Sibo();
    void boot();
};

#endif