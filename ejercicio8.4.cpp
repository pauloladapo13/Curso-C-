#include<iostream>

using namespace std;

int main(){

    char cad1[20], cad2[10];
    int valorEntero;
    float valorFlotante;

    cout<<"Escribe un valor entero: ";
    cin.getline(cad1,20,'\n');
    cout<<"Escribe un valor flotante: ";
    cin.getline(cad2,10,'\n');

    valorEntero = atoi(cad1);
    valorFlotante = atof(cad2);

    cout<<"La suma es: "<<valorEntero+valorFlotante<<endl;
    

    
    
    
    
    return 0;
}

