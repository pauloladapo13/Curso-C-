//4. Escribe la siguiente expresíon como expresión en C++.

#include<iostream>

using namespace std;

int main(){
    float a, b, c, d, resultado = 0;

    cout<<"Introduce el valor de a:"; cin>>a;
    cout<<"Introduce el valor de b:"; cin>>b; 
    cout<<"Introduce el valor de c:"; cin>>c; 
    cout<<"Introduce el valor de d:"; cin>>d;

    resultado = a+ (b/(c-d));

    cout.precision(2);
    cout<<"\nEl resultado es igual a "<<resultado<<endl;


    return 0;
}