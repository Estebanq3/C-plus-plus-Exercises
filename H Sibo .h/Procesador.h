#ifndef _PROC
#define _PROC
#include "ALU.h"
#include "UnidadControl.h"
#include "Memoria.h"
#include "Interfaz.h"

// enums son estáticos, constantes y públicos
// definición de constantes para acceder a los registros
enum REGISTROS
{
    CERO,
    UNO,
    /* uso general */
    A,
    B,
    C,
    D,
    E, // MBR
    MENOS_UNO
};

enum INSTRUCCIONES
{
    // falta rellenar
    CARGAR,
    GUARDAR,
    INPUT_N,
    INPUT_H,
    OUTPUT_N,
    OUTPUT_H,
    SUMA,
    RESTA,
    MULTIPLICACION,
    DIVISION,
    RESIDUO,
    MOVER,
    SALTAR_CERO,
    SALTAR_NEG,
    SALTAR,
    STOP
};

class Procesador
{
    static const int NUM_REGISTROS = 7;
    friend class UnidadControl;
private:
    ALU alu;
    UnidadControl unidad_control;
    Memoria* memoria;
    Interfaz* interfaz;
    short registros[NUM_REGISTROS];
public:
    Procesador(Memoria* memoria,
    Interfaz* interfaz,
    const char* programa);
};

#endif
