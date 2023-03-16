#ifndef _VALOR
#define _VALOR

class Valor
{
private:
    short valor;
    // convierte hilera de char a short
    short _hex2Dec(char*);
    // convierte short a hilera de char
    char* _dec2Hex(short);
public:
    Valor(short);
    // requiere hex tamaño 4
    Valor(const char* hex);
    short getValor() const;
    char* getHex() const;
    // operaciones aritméticas
    Valor operator+(const Valor& otro);
    Valor operator-(const Valor& otro);
    Valor operator*(const Valor& otro);
    Valor operator/(const Valor& otro);
    Valor operator%(const Valor& otro);
};

#endif