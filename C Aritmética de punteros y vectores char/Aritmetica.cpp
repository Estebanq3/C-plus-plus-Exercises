#include<iostream>
using namespace std;

int main(){
   int v[] = {2,4,6,8,10};
   int * p = v;

   cout << "El int mide "<< sizeof(int) << endl;
   cout << "El char mide "<< sizeof(char) << endl;

   for(int i=0; i<5; i++){
     cout << "v[" << i << "]= "<< v[i] << endl; 
   }  

   for(int i=0; i<5; i++){
     cout << "p + " << i << " = "<< p+i << endl; 
     cout << "*(p + " << i << ") = "<< *(p+i) << endl; 
   }  

   char * s = (char *) v;
   for(int i=0; i<5; i++){
     cout << "s + " << i << " = "<< (void *) (s+i) << endl; 
     cout << "*(s + " << i << ") = "<< *(s+i) << endl; 
     cout << "s[ + " << i << "] = "<< s[i] << endl; 
   }
   

   return 0;
}
