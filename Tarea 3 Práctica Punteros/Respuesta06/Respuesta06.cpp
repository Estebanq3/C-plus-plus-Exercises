#include <iostream>
//En este programa lo que ocurre es que se imprime la dirección de v al usar un &
using namespace std;

int main(){
    
    char * v = ( char * ) "Hola";
    cout << &v <<endl;

    return 0;
}