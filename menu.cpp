#include<iostream>
#include<math.h>

using namespace std;

int main(){
    int opcion,num;
    float cubo;

    cout<< "\t. :MENU:."<<endl;
    cout<< "1. Cubo de un numero "<<endl;
    cout<<"2. Numero par o impar"<<endl;
    cout<<"3. Salir"<<endl;
    cout<<"Opcion: ";
    cin>>opcion;

    switch(opcion){
        case 1: cout<<"\nDigite un numero: ";
            cin>>num;
            cubo = pow(num,3);
            cout<<"\nEl cubo del numero es: "<<cubo<<endl;
            break;
        
        case 2: cout<<"\n Digite un numero: ";
            cin>>num;
            if (num%2==0){
                cout<<"\nEl numero es par"<<endl;
            }
            else{
                cout<<"\nEl numero es impar"<<endl;
            }
            break;
        
        case 3:
        break;
        
        
        
    }
    
    
    
    
    
    return 0;
}