#include<iostream>

using namespace std;


struct Alumno{
    char nombre[20];
    int edad;
    float promedio;

}alumnos[3];


int main(){
    float mayor= 0;
    int pos;

    for(int i=0; i<3; i++){
        // Guardando los datos para 3 alumnos
        fflush(stdin);
        cout<<i+1<<". Digite su nombre: "; cin.getline(alumnos[i].nombre,20, '\n');
        cout<<i+1<<". Digite su edad: "; cin>>alumnos[i].edad;
        cout<<i+1<<". Digite su promedio: "; cin>>alumnos[i].promedio;
        cout<<"\n";

        // Comprobando cual de los 3 alumnos tiene el mejor promedio
        if(alumnos[i].promedio > mayor) {
            mayor = alumnos[i].promedio;
            pos = i;  
        }
    }

    // Imprimiendo datos del mejor promedio
    cout<<"\nNombre: "<<alumnos[pos].nombre<<endl;
    cout<<"Edad: "<<alumnos[pos].edad<<endl;
    cout<<"Promedio: "<<alumnos[pos].promedio<<endl;


    
    
    
    
    
    return 0;
}