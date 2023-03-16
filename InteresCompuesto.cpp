#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include <conio.h>

using namespace std;

//fórmula para sacar el interés compuesto: c= p(1+t)elevado a la n
//p es el monto
//t es la tasa de interés anual
//n es el número de años
//c es la cantidad dpositada al final del n ésimo año
int main(){
    double monto=0;
    double principal= 0;
    int anio=0;

    cout<<"Digite el monto al cual desea realizarle el interes compuesto:"<<endl;
    cin>>principal;

    cout<<"Digite los anos que va a mantener el deposito:"<<endl;
    cin>>anio;

    cout<<"Ano"<<setw(21)<< "Monto en deposito"<<endl;
    cout<<fixed<<setprecision(2);

    for(double contador=0.05; contador<=0.1; contador+=0.01){
        cout<<"Interes al "<<contador<<" %:"<<endl;
        for(unsigned int ano=1; ano<=anio;++ano){
            monto = principal* pow(1.0+contador,ano);

            cout<<setw(4)<<ano<<setw(21)<<monto<<endl;
        }
    }

cout<<"Digite una tecla para finalizar el programa"<<endl;
getch();

}

