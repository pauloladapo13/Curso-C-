#include<iostream>
#include<string.h>

using namespace std;

struct Persona{
    char nombre[30];
    bool discapacidad; 
}personas[100], personasSinD[100], personasConD[100];


int main(){

    int numero_personas,j = 0,k =0;

    cout<<"Digite el numero de personas: ";
    cin>> numero_personas;

    for(int i=0; i< numero_personas; i++){
        fflush(stdin);
        cout<<"Digite su nombre: "; cin.getline(personas[i].nombre, 30, '\n');
        cout<<"La persona tiene discapacidad(true/false): "; cin>>personas[i].discapacidad;

        if(personas[i].discapacidad == true){
            strcpy(personasConD[j].nombre, personas[i].nombre,30);
            j++;
        }
        else{
            strcpy(personasSinD[k].nombre, personas[i].nombre,30);
        }
    }

    cout<<"\nMostrando las personas sin Discapacidad: \n";
    for(int i=0; i<k; i++){
        cout<<personasSinD[i].nombre<<endl;

    }

    cout<<"\nMostrando las personas con Discapacidad:\n";
    for(int i=0; i<j; i++){
        cout<<personasConD[i].nombre<<endl;
    }

    
    
    
    
    
    return 0;
}