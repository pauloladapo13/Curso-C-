//Escribe la expresión matemática del video en expresión en C++:

#include<iostream>

using namespace std;

int main(){
    
    float a, b, c, d, resultado =0; 
    
    cout<<"\nDigite el valor de a: "; cin>>a;
    cout<<"\nDigite el valor de b: "; cin>>b;
    cout<<"\nDigite el valor de c: "; cin>>c;
    cout<<"\nDigite el valor de d: "; cin>>d;
        

    resultado = (a + b)/ (c + d);

    cout.precision(2);
    cout<<"\nEl resultado es: "<<resultado<<endl;
    
    
    
    
    
    return 0;

}