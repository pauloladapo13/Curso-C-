#include<iostream>

using namespace std;

void pedirDatos();
void mult(float num1, float num2);

float n1, n2;

int main(){


    pedirDatos();
    mult( n1,  n2);  
    
    
    
    return 0;
}

void pedirDatos(){
    cout<<"Introduce los dos numeros a calcular: ";
    cin>>n1>>n2;
    
}


void mult(float num1, float num2){

    float resultado = num1 * num2;

    cout<<"El resultado de los dos numeros introducios es : "<<resultado<<endl;

}