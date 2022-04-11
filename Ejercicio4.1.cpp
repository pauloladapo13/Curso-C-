#include<iostream>

using namespace std;

int main(){

    float temperatura, mayor=0, menor = 999;
    float sumaTotal=0, promedio=0;
    for(int i =0; i<24; i+=4){

        cout<<"Digite la temperatura de la hora "<< i << ": ";
        cin>>temperatura;

        sumaTotal+= temperatura;

        if(temperatura > mayor){
            mayor = temperatura;
        }
        if(temperatura < menor) {
            menor = temperatura;
        }      

        promedio= sumaTotal/6;

        cout<< "\n Temperatura Promedio: "<<promedio<<endl;
        cout<< "\n Temperatura mas alta: "<<mayor<<endl;
        cout<<"\n Temperatura mas baja: "<<menor<<endl;
        
        
        
        }
    
    
    
    
    
    return 0;
}