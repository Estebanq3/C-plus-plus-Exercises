#ifndef _DIRECCION
#define _DIRECCION

class Direccion
{
private:
    int indice;
    // convierte hilera de char a short
    int _hex2Dec(char*);
    // convierte short a hilera de char
    char* _dec2Hex(int);
public:
    Direccion(int);
    // requiere hex tamaño 3
    Direccion(const char* hex);
    int getIndice() const;
    char* getHex() const;
    // pre y pos incrementos
    Direccion& operator++();
    Direccion operator++(int);
};

#endif