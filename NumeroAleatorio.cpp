#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;





int main(){


    srand( static_cast<unsigned int>( time( 0 ) ) );

    int numero=0;
    for(unsigned int contador=1; contador<=10; ++contador){
    numero= (2 + rand() % 8);
    cout<<numero;
    }

}