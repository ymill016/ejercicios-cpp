//Find the Greatest Common Divisor (GCD) of Two Numbers

#include <iostream>
using namespace std;

int MCD(int primerNumero, int segundoNumero){
    int maxDivisor;

    //encontrando divisores menores o iguales a los dos numeros
    for (int i = 1; i<=primerNumero && i<= segundoNumero ; i++){ 
        if (primerNumero % i == 0 && segundoNumero % i == 0){
            maxDivisor = i;
        }
    }

    return maxDivisor;
}

int main (){
    cout << "El maximo comun divisor es: " << MCD(4,8)<<"\n";
    return 0;
}