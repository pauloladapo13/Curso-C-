#include<iostream>
#include<string.h>

using namespace std;

int main(){

    string palabra1 = "";
    string palabra2 = "";
    cout<<"Escribe la primera palabra: "<<endl;
    cin>>palabra1;
    cout<<"Escribe la segunda palabra a comparar "<<endl;
    cin>>palabra2;

    std::transform(palabra1.begin(), palabra1.end(), palabra1.begin(), ::toupper);
    std::transform(palabra2.begin(), palabra2.end(), palabra2.begin(), ::toupper);


    const char *pa1= palabra1.c_str();
    const char *pa2 = palabra2.c_str();

    

    



    cout<<"las palabras introducidas en mayusculas son: "<<pa1<<" "<<pa2<<endl;



    if(strcmp(pa1,pa2) ==0){
        cout<<"Son palabras iguales"<<endl;

    }
    else{
        cout<<"Son palabras distintas"<<endl;
    }
    
    
    
    
    return 0;
}