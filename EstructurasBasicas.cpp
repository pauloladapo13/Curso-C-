#include<iostream>

using namespace std;

// struct Persona {
//     char nombre[20];
//     int edad;     
    
// }persona1 = {"Paul", 19},
// persona2 = {"Ruperto", 15};

struct Persona {
    char nombre[20];
    int edad;     
    
}persona1;

int main() {

    // cout<<"Nombre1: "<<persona1.nombre<<endl;
    // cout<<"Edad1: "<<persona1.edad<<endl;

    // cout<<"\nNombre2: "<<persona2.nombre<<endl;
    // cout<<"Edad2: "<<persona2.edad<<endl;

    cout<<"Nombre: ";
    cin.getline(persona1.nombre,20, '\n');
    cout<<"Edad: ";
    cin>>persona1.edad;

    cout<<"\nImprimiendo datos \n";
    cout<<"Nombre: "<<persona1.nombre<<endl;
    cout<<"Edad: "<<persona1.edad<<endl; 

    
    
    
    return 0;
}