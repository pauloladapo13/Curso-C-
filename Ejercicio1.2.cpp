#include<iostream>

using namespace std;


int main(){

    int num[5] = {1,2,3,4,5};

    int suma = 0;

    for(int i=0; i<5; i++) {
        suma+=num[i];
        
  }
    cout<<"La suma de mis elementos es: "<<suma<<endl;    
    
    
    
    
    return 0;
}