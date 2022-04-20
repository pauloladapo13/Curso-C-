#include<iostream>
#include<string.h>

using namespace std;

int main(){
    
    char frase[50];

    cout<<"Digite una frase: ";
    cin.getline(frase, 50, '\n');

    if(strlen(frase)>10){
        cout<<frase<<endl;

    }
    else{
        cout<<"La cadena no supera los 10 caracteres"<<endl;
    }

    
    
    
    
    return 0;
}