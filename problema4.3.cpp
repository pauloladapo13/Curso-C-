#include <iostream>

using namespace std;

int main(){

    int numeros[3][3];
    int numeros2[3][3];

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<"Digite un numero ["<<i<<"]["<<j<<"]: ";
            cin>>numeros[i][j];
        }
    } 

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){

            cout<<numeros[i][j]<<" ";
        }
    }
    cout<<"Matriz Original\n";

    for(int i=0;i<3; i++){
        for(int j=0; i<3; i++){

            numeros2[i][j] = numeros[j][i];

            cout<<numeros[i][j]<<" ";
            
        }
        cout<<"\n";
    }
    
    
    return 0;
}