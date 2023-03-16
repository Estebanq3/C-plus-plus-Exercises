#include <iostream>
#include <string>
#include <conio.h>


using namespace std;


int main(){
    
  int serieFactorial=1;
  
  for(int contador=1; contador<=5; ++contador){
      serieFactorial*=contador;
      cout<<"El factorial de "<<contador<<" es: "<<serieFactorial<<endl;
  }

  cout<<"Digite una tecla para finalizar el programa"<<endl;
  getch();

}
