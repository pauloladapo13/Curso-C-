#include<iostream>

using namespace std;

int main(){

    int n, factorial=1;
    cout<<"Introduce numero: ";
    cin>>n;
    
    
    for(int i=1; i<=n; i++) {

        factorial*=i;
    }

    cout<<" El resultado factorial del numero introducido es: "<<factorial;




    return 0;
}