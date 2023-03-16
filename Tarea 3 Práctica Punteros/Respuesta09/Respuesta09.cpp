#include<iostream>
using namespace std;
//En este programa como el puntero se iguala al vector entonces, el puntero queda apuntando al vector con los números, por lo tanto al imprimirse p[3] verdaderamente se está imprimiendo v[3]

int main(){
    int v[5]={20,40,60,80,100};
    int *pPtr;
    pPtr=v;
    
    cout<<pPtr[3]<<endl;


}