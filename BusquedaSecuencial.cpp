// Busqueda Sequencial

#include<iostream>

using namespace std;

int main(){

    int a[] = {3,4,2,1,5};
    int i,dato;
    char band = 'F';

    // Busqueda Secuencial
    dato = 4;
    i=0;
    while((band == 'F') && (i<5)){
        if(a[i] == dato){
            band = 'V';
        }
        i++;

    }

    if(band == 'F'){
        cout<<"El numero a buscar no existe en el arreglo";

    }
    else if(band== 'V'){
        cout<<"El numero ha sido encontrado en la pos: "<<i-1<<endl;
  }
    
    
    
    
    
    return 0;
}