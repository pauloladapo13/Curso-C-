//6. Escriba un programa que lea la nota final de cuatro alumnos y calcule la nota final media de los cuatro alumnos.

#include<iostream>

using namespace std;

int main(){

    float nota_a1, nota_a2, nota_a3, nota_a4, media= 0;
    cout<<'Introduzca la nota final del primer alumno: '; cin>>nota_a1;
    cout<<'Introduzca la nota final del segundo alumno: '; cin>>nota_a2;
    cout<<'Introduzca la nota final del quinto alumno: '; cin>>nota_a3;
    cout<<'Introduzca la nota final del cuarto alumno: '; cin>>nota_a4;

    media = (nota_a1 + nota_a2 + nota_a3 + nota_a4) / 4;

    cout<<"\nLa nota media final de los cuatro alumnos es: "<<media<<endl;
    



    return 0;
}