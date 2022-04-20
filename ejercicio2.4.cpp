#include<iostream>
#include<string.h>

using namespace std;

int main(){

    char nombre[50];
    char nombre2[50];

    cout<<"Escribe su nombre, por favor. "<<endl;
    cin.getline(nombre,50,'\n');

    strcpy(nombre2,nombre);

    cout<<"El nombre introducido era "<< nombre2<<endl;
    
    
    
    
    
    
    return 0;
}