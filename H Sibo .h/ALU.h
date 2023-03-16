#ifndef _ALU
#define _ALU

class ALU
{
public:
    int es_cero() const;
    int es_neg() const;
    Valor _operar(const Valor& oper1, const Valor& oper2);
};

#endif