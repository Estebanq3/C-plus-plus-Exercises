#include "derivada.h"
#include <iostream>
using namespace std;

Derivada::Derivada(int value, char letter, double real):Base1(value),Base2(letter){
	this->value = value;
	//this-> letter = letter;
	//this-> real = real;
}

double Derivada::getReal(){
	return real;
} 

ostream &operator<<(ostream & output, const Derivada & derivada){
	output<< "Entero: "<< derivada.value << "\n Char: " << derivada.letter << "\n Real: " << derivada.real <<endl;

	return output;
}

