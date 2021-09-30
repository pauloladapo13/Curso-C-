/* Realice un programa que lea de la entrada
estandar de los siguientes datos de una persona:
Edad: dato de tipo entero
Sexo: dato  de tipo caracter
Altura en metros: dato de tipo real*/

#include<iostream>

using namespace std;

int main(){

    int edad; char genero[10]; float altura;

    cout<<"Introduce edad: ";cin>>edad;
    cout<<"Introduce genero(masc or fem): ";cin>>genero;
    cout<<"Introduce altura en metros: ";cin>>altura;

    cout<<"\nTu edad es: "<<edad<<endl;
    cout<<"\nTu genero es: "<<genero<<endl;
    cout<<"\nTu altura es: "<<altura<<endl;


    return 0;
}