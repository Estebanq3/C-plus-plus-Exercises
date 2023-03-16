#include <iostream>
using namespace std;
//en este caso lo que ocurre es que al imprimir v, se está imprimiendo en realidad la dirección de v[0] pues es el contenido del puntero.

int main(){
    int *v = new int [6];
    *(v+2)=10;
    cout<<v<<endl;
    delete []v;
    
    return 0;
}