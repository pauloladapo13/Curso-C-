/* Escribe un programa que lea de 
la entrada estandar el precio
 de un producto y muestre en la salida estandar 
el precio del producto al aplicarle el IVA */

#include<iostream>

using namespace std;

int main(){

    float precio_i,iva=0.15,precio_f;

    cout<<"Introduce el precio del producto: "; cin>>precio_i; 

    precio_f = precio_i * iva + precio_i; 

    cout<<"\nEl precio del producto final es: "<< precio_f;

    return 0;
}