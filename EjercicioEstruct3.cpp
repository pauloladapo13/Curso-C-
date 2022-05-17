#include<iostream>

using namespace std;


struct Empleado{
    char nombre[10];
    float salario;

}listaEmpleados[100];

int main(){
    float mayor = 0,menor= 99999;
    int n,mpos, menpos;
    cout<<"Digite numero de empleados a analizar: "; cin>>n; 
    
    for(int i=0; i<n; i++){
        fflush(stdin);
        cout<<i+1<<". Digite el nombre del empleado"<<endl; cin.getline(listaEmpleados[i].nombre, 20, '\n');
        cout<<i+1<<". Digite el salario del empleado"<<endl; cin>>listaEmpleados[i].salario;

        if(listaEmpleados[i].salario > mayor) {
            mayor= listaEmpleados[i].salario;
            mpos= i;
        }

        if(listaEmpleados[i].salario < menor){
            menor = listaEmpleados[i].salario;
            menpos = i;
        }

    }

    cout<<"El empleado con mayor salario es: "<<listaEmpleados[mpos].nombre<<endl;
    cout<<"Con un salario de "<<listaEmpleados[mpos].salario<<endl;

    cout<<"El empleado con menor salario es: "<<listaEmpleados[menpos].nombre<<endl;
    cout<<"Con un salario de "<<listaEmpleados[menpos].salario<<endl;

    
    
    
    return 0;
}