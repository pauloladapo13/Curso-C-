#include<iostream>

using namespace std;

float num;

void pedirDatos();

void al_cuadrado(float x);

int main(){

   pedirDatos();
   al_cuadrado(num);
   
   
   
   
   return 0;
}

void al_cuadrado(float numero){
   float res = numero * numero;

   cout<<"El cuadrado del numero introducido es igual a "<<res<<endl;
}
void pedirDatos(){
    cout<<"Digite el numero: ";
    cin>>num;
 }