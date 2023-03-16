#ifndef _UNIDAD_CONTROL
#define _UNIDAD_CONTROL
#include "Memoria.h"
#include "Direccion.h"
#include "Valor.h"

class UnidadControl
{
private:
    // prototipo
    class Procesador;
    // banderas
    // en c++, los ints son booleanos
    // 0 es falso
    // no 0 es verdadero
    int neg;
    int cero;
    int stop;
    Direccion PC;
    Valor IR;
    Memoria* memoria;
    Procesador* procesador;
    void _cargarPrograma(const char* programa);
    void _fetch();
    void _ejecutar();
public:
    UnidadControl(Procesador* procesador,
        Memoria* memoria,
        const char* programa);
    // mientras !stop:
        // leer instrucción de memoria en dirección del PC
        // sumo 1 al PC
        // decodificar y ejecutar instruccion en el IR
    void run();
};

#endif