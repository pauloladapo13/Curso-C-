#include<iostream>
#include<string.h>


using namespace std;

int main(){

    char cad1[20];
    char cad4[20] = "reconocer";

    cout<<"Escribe una palabra: "<<endl;
    cin.getline(cad1,20,'\n');
    
    string cad2 = cad1;

    std::reverse(cad2.begin(),cad2.end());

    const char *cad3= cad2.c_str();
    
    if(strcmp(cad1,cad3)==0){
        cout<<cad1<<" es un polindromo";

    }
    else{
        cout<<cad1<<"No es un polindromo"<<endl;
    }

    
    
    return 0;
}