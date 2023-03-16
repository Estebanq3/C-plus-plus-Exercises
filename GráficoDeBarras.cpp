#include <iostream>
#include <string>
#include <conio.h>

using namespace std;



int main(){
    //char asterisco= '*';
    int numero=0;

    cout<<"Digite 5 numeros distintos para hacer un gráfico de barras, escriba el número:"<<endl;
    for(unsigned int contador=1; contador<=5; ++contador){
        cin>>numero;

        for(unsigned int contador=1; contador<=numero; ++contador){
            cout<< '*';
        }
        cout<<"\n";

    }
    


}