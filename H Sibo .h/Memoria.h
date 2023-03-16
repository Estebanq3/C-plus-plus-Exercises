#ifndef _MEMO
#define _MEMO
#include "Valor.h"
#include "Direccion.h"

class Memoria
{

static const int MAX_MEM = 4096;

private:
    Valor memoria[MAX_MEM];
public:
    Valor getCelda(const Direccion& direccion);
    void setCelda(const Direccion& direccion, const Valor& valor);
};


#endif
