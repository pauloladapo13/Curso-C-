#include<iostream>

using namespace std;

int main(){

    int A[3][3] = {{1,2,1},{2,1,1},{2,1,2}};
    int B[3][3] = {{3,2,1},{2,3,1}, {1,1,3}};
    int C[3][3];

    // Mostrando las matrices

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<A[i][j]<<" ";
            
        }
        cout<<"\n";
    }
    cout<<"Mostrando la segunda matriz "<<endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<B[i][j]<<" "; 

        }
        cout<<"\n";
    }

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            C[i][j] =0;
            for(int k=0; k<3; k++){
                C[i][j] = C[i][j] + A[i][k]*B[k][j];
            }
        }
    }

    cout<<"Matriz resultante de la multiplicacion es: \n";

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<C[i][j]<<" ";

        }
        cout<<"\n";
    }
    
    return 0;
}