#include <iostream>

using namespace std;

int main(){

    char let1[]= {'a', 'b', 'c', 'd', 'e'};
    char let2[] = {'f', 'g', 'g', 'h', 'i'};
    char let3[10];

    for(int i=0; i<5; i++) {
        let3[i] = let1[i];


    }

    for(int j=5; j<10; j++) {
        let3[j]= let2[j-5];
    }
    
    for(int k=0; k< 10; k++){
        cout<< "Los elementos almacenados son: "<<let3[k]<<endl;
    }
    return 0;
}