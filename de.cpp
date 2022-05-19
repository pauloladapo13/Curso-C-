#include<iostream>

using namespace std;


int encontrarMax(int x, int y){
    int numMax;

    if(x > y){
        numMax = x;
    }
    else{
        numMax = y;
    }

    return numMax;
}



int main(){
    int n1,n2,mayor;

    cout<<"Digite 2 numeros: ";
    cin>>n1>>n2;
    
   mayor = encontrarMax(n1,n2);


    cout<<"El mayor de los dos numeros introducidos es "<< mayor<<endl;

    
    
    
    
    return 0;
}

// Definicion funcion

