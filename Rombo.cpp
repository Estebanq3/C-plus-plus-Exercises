#include<iostream>
#include<string>

using namespace std;




int main(){

    double numeroLados=0;
    int contadorEspaciado=0;
    double mitadRombo=0;
    string asterisco= "*";
    int cuentaRegresiva=0;

    cout<<"Digite la cantidad de lados del rombo: "<<endl;
    cin>>numeroLados;

    mitadRombo= (numeroLados/2)+0.5;
    contadorEspaciado=numeroLados;
    cuentaRegresiva=numeroLados-2;
     
     for(unsigned int contador=1; contador<=mitadRombo; ++contador){
        --contadorEspaciado;
         for(int contador=mitadRombo; contador<=contadorEspaciado; contador++){
             cout<<" ";
        }
        cout<<asterisco<<endl;
        asterisco+= "**"; 
     }

   
   
   contadorEspaciado+=1;
   //cout<< cuentaRegresiva<<endl;

     for(unsigned int contador= (numeroLados-mitadRombo); contador>=1; --contador){
        contadorEspaciado++;
          for(unsigned int contador2=mitadRombo; contador2<contadorEspaciado; contador2++){
             cout<<" ";
          }
         
          for(int retroceso= cuentaRegresiva; retroceso>=1; --retroceso){
              cout<<"*";
          }
          cuentaRegresiva-=2;

          cout<<"\n";

          
    
     }
     
     
     
     
  

}