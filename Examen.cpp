#include <iostream>
#include <string>
#include <conio.h>

using namespace std;




int main(){

    string respuesta="";
    int nota=0;

    for(unsigned int contador=1; contador<=5;contador++){

        switch(contador){
            
            case 1:
            cout<<"Pregunta N1: A que edad alcanzan la madurez las crias de elefante"
            <<"\n Respuestas \n A)3-4 anos \n B)6-7 anos \n C)11 anos \n D)12-15 anos"<<"\n Respuesta:";
            cin>>respuesta;

            if(respuesta=="D"){
                nota+=1;
                cout<<"\nAcertaste"<<endl;
            }
            else{
                cout<<"Fallaste\nRespuesta Correcta: D"<<endl;
            }
            break;

            case 2:
            cout<<"Pregunta N2: De que sustrato se nutre principalmente el cerebro"
            <<"\n Respuestas \n A)Omega3 \n B)Vitaminas Antioxidantes \n C)Vitamina B12 \n D)Glucosa"<<"\n Respuesta:";
            cin>>respuesta;

            if(respuesta=="D"){
                nota+=1;
                cout<<"\nAcertaste"<<endl;
            }
            else{
                cout<<"Fallaste\nRespuesta Correcta: D"<<endl;
            }

            break;

            case 3:
            cout<<"Pregunta N3: Que es la filofobia"
            <<"\n Respuestas \n A)Temor a objetos filosos \n B)Temor a la lectura \n C)Temor a enamorarse \n D)Temor a acantilados"<<"\n Respuesta:";
            cin>>respuesta;

            if(respuesta=="C"){
                nota+=1;
                cout<<"\nAcertaste"<<endl;
            }
            else{
                cout<<"Fallaste\nRespuesta Correcta: C"<<endl;
            }
            break;

            case 4:
            cout<<"Pregunta N4: A que parte del cuerpo le afectan mas los infartos"
            <<"\n Respuestas \n A)Miocardio \n B)Valvula Mitrial \n C)Ventriculo Derecho \n D)Cerebro"<<"\n Respuesta:";
            cin>>respuesta;

            if(respuesta=="A"){
                nota+=1;
                cout<<"\nAcertaste"<<endl;
            }
            else{
                cout<<"Fallaste\nRespuesta Correcta: A"<<endl;
            }
            break;

            case 5:
            cout<<"Pregunta N5: Cuando es el cumpleanos de Panchita Quesada"
            <<"\n Respuestas \n A)29 de Febrero \n B)8 de Febrero \n C)1 de Mayo \n D)4 de Junio"<<"\n Respuesta:";
            cin>>respuesta;

            if(respuesta=="C"){
                nota+=1;
                cout<<"\nAcertaste"<<endl;
            }
            else{
                cout<<"Fallaste\nRespuesta Correcta: C"<<endl;
            }
            break;

            default:
            ;
            break;

        }

    }

    cout<<"Acertaste un total de: "<<nota;
    cout<<"\nDigite una tecla para finalizar el programa"<<endl;
    getch();

}