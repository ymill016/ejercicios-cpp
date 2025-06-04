//suma de numeros en serie 1 + 1/2^2..

#include <iostream>
#include <cmath>
using namespace std;

double sumaSerie (double sizeSerie){
    double sumaTotal = 0;
    double serie = 0;
    for (int i = 1; i <= sizeSerie; i++){
        serie = 1/pow(i,i);
        sumaTotal += serie;
    }
    return sumaTotal;
}

int main (){
    cout <<"Suma en serie es: "<< sumaSerie(5);
    return 0;
}