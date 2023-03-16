#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include <conio.h>

using namespace std;



main(){

    double monto=0;
    double principal= 0;
    int mesCalculo=1;

    cout<<"Digite la cantidad de usuarios de Facebook:"<<endl;
    cin>>principal;


while(monto<2500000000){
    cout<<"Mes "<<setw(21)<< "Cantidad de Usuarios:"<<endl;
    cout<<fixed<<setprecision(2);

    for(double contador=0.02; contador<=0.05; contador+=0.01){
        cout<<"Interes al "<<contador<<" %:"<<endl;
        for(int mes=1; mes<=mesCalculo;++mes){
            monto = principal* pow(1.0+contador,mes);

            cout<<setw(4)<<mes<<setw(21)<<monto<<endl;
        }
    }
mesCalculo+=1;

}


mesCalculo=1;
monto=0;
double contador=0.02;
cout<<"Interes al "<<contador<<" %:"<<endl;
while(monto<2500000000){

    monto = principal* pow(1.0+contador,mesCalculo);
    cout<<setw(4)<<mesCalculo<<setw(21)<<monto<<endl;

    ++mesCalculo;

    
}



cout<<"Digite una tecla para finalizar el programa"<<endl;
getch();
}