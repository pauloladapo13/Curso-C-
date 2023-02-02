#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int main() {

    int result = ceil(2.01);
    bool val1 = 1;
    cout<<result<<endl;
    char ch = 'b';
    char ch2 = 98;
    string myModule = "Software Engineering";
    string myModule2;

    cout<<left<<setw(20)<<"Hola"<<setw(10)<<"Holaa"<<endl
    <<setw(10)<<"Holaaa"<<setw(10)<<"Holaaaa"<<endl;

    cout<<setprecision(1)<<1.23455<<endl;
    cout<<setprecision(2)<<1.23455<<endl;
    cout<<setprecision(3)<<1.23455<<endl;
    cout<<setprecision(4)<<1.23455<<endl;
    cout<<setprecision(5)<<1.23455<<endl;
    cout<<setprecision(6)<<1.23455<<endl;

    cout<<boolalpha<<val1<<endl<<noboolalpha<<val1<<endl;
    
    cout<< ch<<'b'<<endl;
    cout<< +ch<<endl;
    cout<< ch2<<endl;
    cout<< myModule<<endl;

    cout<<"Enter module name:";
    cin>>myModule2;
    cout<<"My module is: "<<myModule2;


    return 0;
}
