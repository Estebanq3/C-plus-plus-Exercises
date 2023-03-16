#include <iostream>
#include <string>
#include <conio.h>

using namespace std;




int main(){

int centinela=1;
double tiempoTrabajado=0;
double salario=0;
int articulos=0;
double precioArticulo=0;

    while(centinela!=-0){
        int codigoEmpleado=0;
        cout<<"Digite el codigo del empleado al que desea calcular el salario:"<<endl;
        cin>>codigoEmpleado;

        switch (codigoEmpleado)
        {
        
        case 1:
        tiempoTrabajado=0;
        salario=0;
        cout<<"Digite el salario del gerente:"<<endl;
        cin>>salario;
        cout<<"Digite las semanas a pagar:"<<endl;
        cin>>tiempoTrabajado;
        cout<<"Salario del Gerente: $"<< tiempoTrabajado*salario;
        break;


        case 2:
        salario=0;
        tiempoTrabajado=0;
        cout<<"Digite el salario del trabajador por horas:"<<endl;
        cin>>salario;
        cout<<"Digite las horas a pagar:"<<endl;
        cin>>tiempoTrabajado;
        if(tiempoTrabajado<=40){
            cout<<"El salario del trabajador por horas es: $"<<tiempoTrabajado*salario;
        }
        else{
            salario= (40*salario)+((tiempoTrabajado-40)*(salario*1.5));
            cout<<"El salario del trabajador por horas(incluyendo extras) es: $"<<salario;
        }
        break;
        
        case 3:
        tiempoTrabajado=0;
        salario=0;
        articulos=0;
        precioArticulo=0;
        cout<<"Digite el salario del trabajador por comision:"<<endl;
        cin>>salario;
        cout<<"Digite las semanas a pagar:"<<endl;
        cin>>tiempoTrabajado;
        cout<<"Digite la cantidad de articulos que vendio el empleado:"<<endl;
        cin>>articulos;
        cout<<"Digite el precio del articulo que vende el empleado:"<<endl;
        cin>>precioArticulo;
        
        salario=(salario*tiempoTrabajado)+((0.057*precioArticulo)*articulos);
        cout<<"\nSalario del Empleado: $"<<salario; 
        break;

        case 4:
        precioArticulo=0;
        articulos=0;

        cout<<"Digite la cantidad de articulos producidos por el empleado:"<<endl;
        cin>>articulos;
        cout<<"Digite la paga al empleado por cada articulo producido:"<<endl;
        cin>>precioArticulo;

        cout<<"\nSalario del Empleado: $"<< articulos*precioArticulo;

        break;
        
        default:
        cout<<"[ERROR] Digite un código válido por favor.(1-4)"<<endl;
        break;
        
        }
        
    cout<<"\nCalcular mas empleados: digite 1"
    <<"\nFinalizar el calculo: digite 0"<<endl;
    cin>>centinela;
    
    }

    cout<<"Presione una tecla para finalizar por completo";
    getch();

}