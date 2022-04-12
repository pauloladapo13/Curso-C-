#include<iostream>

using namespace std;

int main(){
    int num[100],n, mayor=0;

    cout<<"Digite el numero de elementos del arreglo: ";
    cin>>n;

    for (int i=0; i<n; i++){
        cout<< i+1<< ". Digite un numero: ";
        cin>>num[i];

        if(num[i]> mayor){
            mayor = num[i];
        }
    }
    
    cout<<"El mayor elemento es: "<< mayor<<endl;
    
    
    
    return 0;
}