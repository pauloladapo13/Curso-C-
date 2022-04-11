#include<iostream>

using namespace std;

int main(){

    int numero, conteo = 0;

    do{
        cout<<"Introduce un numero: ";
        cin>>numero;

        if (numero > 0){
            conteo++;

        }
    }while(numero!=0 );

    cout<<"\n El numero de valores mayores a cero introducidos es: "<<conteo<<endl;
    
    
    return 0;
}