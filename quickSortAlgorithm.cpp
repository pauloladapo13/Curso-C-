#include<iostream>

using namespace std;

void intercambio(float &x, float &y){
    float aux;
    aux = x;
    x = y;
    y = aux;
}

void quickSort(float a[], int primero, int ultimo){
    int i, j, central;
    float pivote;

    central = (primero+ ultimo) / 2;
    pivote =  a[central];
    i = primero;
    j = ultimo;

    do{
        while(a[i]< pivote) i++;
        while(a[j]> pivote) j--;

        if(i<=j){
            intercambio(a[i], a[j]);
            i++;
            j--;
        }
    }while(i<=j);

    if(primero<j){
        quickSort(a, primero, j);

    }
    if(i<ultimo){
        quickSort(a, i, ultimo);
    }
}

int main(){

    float arreglo[] = {4,7,1,8,2,10,5,9,3};

    quickSort(arreglo,0, 8);

    cout<<"Arreglo Ordenado - Forma Ascendente"<<endl;
    for(int i=0; i<9; i++){
        cout<<arreglo[i]<<"|";

    }
    cout<<"\nArreglo Ordenado - Forma Descendente"<<endl;
    for(int i=8; i>=0; i--){
        cout<<arreglo[i]<<"|";

    }


    return 0;
}