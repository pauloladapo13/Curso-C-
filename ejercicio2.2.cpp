#include<iostream>

using namespace std;

int main(){

    
    int num[5]= {1,2,3,4,5};
    int mul= 1;

    for(int j=0; j<5; j++){

        mul*=num[j];
    }
    
    cout<<"La multiplicacion de los elementos del vector es "<<mul<<endl;

    
    
    return 0;
}