#include<iostream>


using namespace std;

int main(){

    float examen1, examen2, examen3;
    int apT=0, ap1=0, apU;

    for(int i=1; i<=5; i++){

        cout<<i<< ". Digite la nota del primer examen: "; cin>>examen1;
        cout<<i<< ". Digite la nota del segundo examen: "; cin>>examen2;
        cout<<i<< ". Digite la nota del tercer examen: "; cin>>examen3;
        cout<<"\n";
             
        if((examen1 > 10.5)&&(examen2>10.5)&&(examen3>10.5)){
            apT++;
        }
        if((examen1 > 10.5)||(examen2>10.5)||(examen3>10.5)){
            ap1++;
        }
        
        if((examen1< 10.5)&&(examen2<10.5)&&(examen3>10.5)){
            apU++;
        }

    }
     
    cout<<"\nAlumnos que aprobaron todos los examenes: "<< apT<<endl;
    cout<<"\nAlumnos que aprobaron al menos un examen: "<< ap1<<enl;
    cout<<"\nAlumnos que aprobaron al menos un examen: "<< apU<<endl;

    return 0;
}