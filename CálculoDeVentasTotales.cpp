#include <iostream>
#include <string>
#include <conio.h>

using namespace std;



int main(){

int numeroProducto=0;
int cantidadVendida=0; 
double precioProducto1= 0;
double precioProducto2= 0;
double precioProducto3= 0;
double precioProducto4= 0;
double precioProducto5= 0;



while(numeroProducto!=-1 ){
cout<<"Digite el numero de producto que va a introducir:"<<endl;    
cin>>numeroProducto;
cout<<"Digite la cantidad de producto vendida:"<<endl;
cin>>cantidadVendida;

    switch(numeroProducto){
        case 1:
        precioProducto1= cantidadVendida*2.98; 
        break;

        case 2:
        precioProducto2= cantidadVendida*4.50;
        break;

        case 3:
        precioProducto3= cantidadVendida*9.98;
        break;

        case 4:
        precioProducto4= cantidadVendida*4.49;
        break;

        case 5:
        precioProducto5= cantidadVendida*6.87;
        break;

        default:
        cout<<"Se introdujo un valor incorrecto"
        <<"Favor digite un valor que se encuentre entre los numeros enteros de 1-5"<<endl;
        break;

    }

    cout<<"Si no desea introducir un nuevo producto digite un -1, si desea continuar digite cualquier numero diferente"<<endl;
    cin>>numeroProducto;
}

cout<<"Productos vendidos:"
<<"\nProducto 1:"<<"$"<< precioProducto1
<<"\nProducto 2:"<<"$"<< precioProducto2
<<"\nProducto 3:"<<"$"<< precioProducto3
<<"\nProducto 4:"<<"$"<< precioProducto4
<<"\nProducto 5:"<<"$"<< precioProducto5<<endl;



}