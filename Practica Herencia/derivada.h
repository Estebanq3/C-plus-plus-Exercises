#include "base1.h"
#include "base2.h"
#include <iostream>
using namespace std;


#ifndef _DERIVADA
#define _DERIVADA
class Derivada: public Base1, public Base2{
	
friend ostream &operator<<(ostream &, const Derivada &);

public:
	Derivada();
	Derivada(int, char, double);
	double getReal();

private:
	double real;

};


#endif
