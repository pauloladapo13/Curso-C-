#include<iostream>

using namespace std;

int main(){

    int numeros[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};

    cout<<"Mostrando matriz completa:\n";
    for (int i=0;i<3; i++){
        for(int j=0;j<3;j++){
            cout<<numeros[i][j];
        }
        cout<<"\n";
    }
    cout<<"Mostrando diagonal principal: \n";
    for (int i=0;i<3; i++){
        for(int j=0;j<3;j++){
            if(i==j){
                cout<<numeros[i][j]<<endl;

            }
        }
        
    }



    return 0;
}