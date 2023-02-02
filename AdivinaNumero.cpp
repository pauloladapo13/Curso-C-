#include<iostream>
#include<time.h>

using namespace std;

int main() {

    int numero, dato, contador = 0;

    srand(time(NULL));

    // The srand function is the function that use time function to create a datatype NULL
    // The after defining the function srand() we ca use rand() function 
    // One we call it we can use the operator %() to determine the limit of the range of number to be rand
    
    dato = 1 + rand()%(100);

    cout<<dato<<endl;

    do{
        cout<<"Digite un numero: "; cin>>numero;

        if(numero>dato){
            cout<<"\nDigite un numero menor\n";
        }
        if(numero<dato){
            cout<<"\nDigite un numero mayor\n";
        }
        contador++;
    }while(numero != dato);
    
    cout<<"\nFelicidades adivinaste el numero\n";
    cout<< "Numero de intentos "<<contador<<endl;
    
    
    
    return 0;
}


