#include <iostream>

using namespace std;

int main(){

    int num[5] = {1,2,3,4,10};
    int mayor = 0; 
    int suma = 0;
    for(int i=0; i<5; i++){
        suma+= num[i];

        if(num[i]> mayor){
            mayor = num[i];
        }

    }
    
    if(mayor== suma-mayor){

        cout<<"El numero "<< mayor<<" equivale a suma de los demas"<<endl;


    }
    else{
        cout<<"No existe ningun valor equivalente a la suma de los demas. "<<endl;
    }


    

    
    
    return 0;
}