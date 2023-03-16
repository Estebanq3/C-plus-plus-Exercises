#include <iostream>
#include <string>
#include <conio.h>


using namespace std;

int main(){

    string asterisco="*";
    for(unsigned int contador=1; contador<=10; ++contador){
        cout<<asterisco<<endl;
        asterisco+= '*';
    }


}





/*
**********
*********
********
*******
******
*****
****
***
**
*

int main(){
string asterisco= "**********";
string modificado="";

for(unsigned int contador=10; contador>=1;--contador){
    modificado= asterisco.substr(0,contador);
    cout<<modificado<<endl;
    
}
    
}
*/


/*
**********
 *********
  ********
   *******
    ******
     *****
      ****
       ***
        **
         *
int main(){
string asterisco= "**********";
int contadorSecundario= 0;

    for(unsigned int contador=10; contador>=2;--contador){
        if(contador==10){
            cout<<asterisco<<endl;
        }
        
            asterisco[contadorSecundario]=' ';
            ++contadorSecundario;
            cout<<asterisco<<endl;
        


        
    }
    
}
*/


/*       *
        **
       ***
      ****
     *****
    ******
   *******
  ********
 *********
**********
int main(){
string asterisco= "         *";
int contadorSecundario= 9;

for(unsigned int contador=1; contador<=10;++contador){


    asterisco[contadorSecundario]='*';
    --contadorSecundario;
    cout<<asterisco<<endl;
        


        
    }
    
}
*/

