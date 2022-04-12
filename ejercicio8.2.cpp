#include<iostream>

using namespace std;

int main(){

    int list1[5];
    int list2[5], mul= 0;

    for (int i=0; i<5; i++){

        cout<<i<< ". Digite los elementos del arreglo: ";
        cin>>list1[i];
        list1[i]*= 2;
        
    }

    for(int j=0; j<5; j++){
        
        list2[j] = list1[j];
        cout<<list2[j]<<endl;
    }

    



    return 0;
}