#include <iostream>

using namespace std;

int main(){

    int numeros[2][2] = {{1,2}, {3,4}};
    int matriz2[2][2];

    for(int i=0;i<2;i++){
        for(int j=0;i<2; i++){
            matriz2[i][j] = numeros[i][j];

        }
    }
    
    for(int i=0; i<2; i++){
        for(int j=0; j<2; i++){
            cout<<matriz2[i][j];
        }
    }
    cout<<"\n";
    
    return 0;
}