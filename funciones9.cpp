/* Ejercicio 9: Escrive una funcion nombrada tiempo() que tenga un parametro en numero
entero llamada totalSeg y tres parametros de referencia enteros nombradas horas, min y
y seg. La funcion es convertir el numero de segundos transmitido en un numero equivalente de horas, minutos y segundo. */

#include <iostream>

using namespace std;

void tiempo(int totalSeg, int& horas, int& min, int& seg);

int main(){

    int totalSeg, horas= 0, min = 0, seg = 0;
    cout<<"Introducir segundos totales a traducir: ";
    cin>>totalSeg;
    
    
    tiempo(totalSeg,horas, min, seg);

    cout<<"Los segundos totales convertidos es igual a "<<horas<<" horas "<<min<<" minutos y "<<seg<<" segundos. "<<endl;     

    
    
    
    return 0;
}

void tiempo(int totalSeg, int& horas, int&min, int& seg){

    horas = totalSeg/3600;
    totalSeg =  totalSeg%3600;
    min = totalSeg/60;
    seg = totalSeg%60;
     
}
    


