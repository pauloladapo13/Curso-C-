#include<iostream>
#include<string>

using namespace std;

int main(){

    char cadena1[20], cadena2[20];

    cout<<"Escribe la primera cadena"<<endl;
    cin.getline(cadena1,20, '\n');
    cout<<"Escribe la segunda cadena"<<endl;
    cin.getline(cadena2,20,'\n');

    if(strcmp(cadena1,cadena2) ==0){
        cout<<"Ambas cadenas son iguales"<<endl;

    }
    else if(strcmp(cadena1,cadena2) <0){

            cout<<"La primera cadena va antes alfabeticamente"<<endl;


        }
    else{cout<<"La segunda cadena va antes alfabeticamente"<<endl; 
    }
    
    
    
    
    
    
    return 0;
}