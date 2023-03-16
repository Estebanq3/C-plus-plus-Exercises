#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class Dadin{
    public:
    unsigned int tirarDados(){
        unsigned int dado1 = (1+rand()%6);
        unsigned int dado2= (1+rand()%6);

        int suma= dado1 + dado2;
        cout<<"El jugador tiro: "<<dado1<<"+"<<dado2<<"= "<< suma<<endl;
        
    return suma;
    }
};

int main(){

    Dadin dadin;
    enum Estado{CONTINUAR, GANO, PERDIO};
    unsigned int miPunto=0;
    

    srand(static_cast<unsigned int> (time(0)));
    Estado estadoDeJuego= CONTINUAR;



    unsigned int sumaDePuntos= dadin.tirarDados();

    switch(sumaDePuntos){
        case 7:
        case 11:
        estadoDeJuego= GANO;
        break;
        
        case 2:
        case 3:
        case 12:
        estadoDeJuego= PERDIO;
        break;

        case 4:
        case 5:
        case 6:
        case 8:
        case 9:
        case 10:
        estadoDeJuego= CONTINUAR;
        miPunto= sumaDePuntos;
        break;

        default:
        cout<<"La suma no permite la continuidad del juego"<<endl;
        break;
    }

    while(estadoDeJuego==CONTINUAR){
        sumaDePuntos= dadin.tirarDados();
        cout<<"La suma de los dados fue de:"<< sumaDePuntos<<endl;


        if(sumaDePuntos== miPunto){
            estadoDeJuego= GANO;
        }else{
            if(sumaDePuntos==7){
            estadoDeJuego= PERDIO;
            }
        }   
    }

    if(estadoDeJuego==GANO){
        cout<<"El jugador gana"<<endl;
    }else{
        if(estadoDeJuego==PERDIO){
            cout<<"El jugador pierde"<<endl;
        }
    }








}

    