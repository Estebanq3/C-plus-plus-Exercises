#include <iostream>
#include <string>
#include <conio.h>
#include <math.h>

using namespace std;


int i=0;
int j=0;
int k=0;
int hip=0;
int catetoOpuesto=0;
int catetoAdyacente=0;


int main(){
   for(i=1; i<=500; i++){
      hip= i*i;
      for(j=1; j<=500;j++){
         catetoOpuesto= j*j;
         for(k=1; k<=500; k++){
            catetoAdyacente= k*k;

            if((catetoAdyacente+catetoOpuesto)==hip){
                cout<<"Terna Pitagórica:"
                <<"\nCatetoOpuesto:"<<j
                <<"\nCatetoAdyacente:"<<k
                <<"\nHipotenusa:"<< i<<endl;
            }
         }
      }
   }

}
