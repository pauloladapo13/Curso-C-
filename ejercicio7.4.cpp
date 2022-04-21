#include<iostream>
#include<string.h>

using namespace std;

int main(){

    string nombre = "";
    char nombre1[20];
    
    cout<<"Escribe tu nombre en mayusculas: "<<endl;
    cin.getline(nombre1,20,'\n');


    if(nombre1[0]=='A'){
    
        nombre = nombre1;
        std::transform(nombre.begin(), nombre.end(), nombre.begin(), ::tolower);
        cout<<"El nombre escrito es: "<<nombre<<endl;
        
     
    }
    else{
        cout<<nombre1<<endl;
    }
    
    
    
    
    return 0;
}