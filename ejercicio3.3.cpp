#include<iostream>
#include<stdlib.h>
#include<time.h>


using namespace std;

int main(){
    
    int numeros[100][100], dato, nfilas, ncol;
    int numeros2[100][100];

    cout<<"Digite el numero de filas: ";
    cin>>nfilas;
    cout<<"Digite el numero de de columnas: ";
    cin>>ncol;

    srand(time(NULL));

    for(int i=0; i<nfilas; i++){
        for(int j=0; j<ncol; j++){
            dato = 1+rand()%(100);
            numeros[i][j]=dato; 
        }
    }


    for(int i=0; i<nfilas; i++){
        for(int j=0; j<ncol; j++){
            numeros2[i][j] = numeros[i][j];
        }
    }


    for(int i=0; i<nfilas; i++){
        for(int j=0; j<ncol; j++){
            cout<<numeros[i][j]<<" ";
            
        }
        cout<<"\n";
    }
    
    
    
    
    return 0;
}