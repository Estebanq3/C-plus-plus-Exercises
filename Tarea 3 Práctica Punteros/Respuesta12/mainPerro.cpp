#include"Perro.h"
#include<iostream>
using namespace std;
//Se produce un error ya que existe un asterisco de más, es decir el primer puntero le debería de apuntar a otro puntero, más a lo que apunta es a una instancia de perro, por lo que se produce un error
//Todo puntero doble tiene que apuntarle a un puntero simple, y no se está haciendo
int main(){
Perro** perro = new Perro[10];
 
  return 0;
}
