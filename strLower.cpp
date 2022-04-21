#include<iostream>
#include<string.h>

using namespace std;

int main() {

    string palabra = "PROGRAMACION EN C++";

    std::transform(palabra.begin(), palabra.end(), palabra.begin(), ::tolower);
    
    
    const char *palabra1 = palabra.c_str();

    cout<<palabra<<endl;


    
    
    
    
    
    
    return 0;
}