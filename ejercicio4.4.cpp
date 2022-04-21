#include<iostream>
#include<string.h>

using namespace std;

int main(){

    char cadena[] = "Hola que tal ";
    char cadena2[20];

    cout<<"Digite su nombre: ";
    cin.getline(cadena2,20, '\n');

    strcat(cadena, cadena2);

    cout<<"Frase: "<<cadena<<endl;
    
    
    
    
    return 0;
}