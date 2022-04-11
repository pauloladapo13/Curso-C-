#include<iostream>

using namespace std;

int main(){

    int n, par,sumap=0, sumaim=0, sumaTotal=0;

    cout<<"Digite el numero de elementos a sumar: ";
    cin>>n;

    for(int i=1; i<=n; i++){

        if(i%2==0){
            par = i*-1;
            sumap+=par;
        }
        else{
            sumaim+=i;
        }
        
        sumaTotal= sumap+sumaim;

        
    }    
    
    cout<<"La suma de todos los elementos es: "<<endl;
    
    
    return 0;
}