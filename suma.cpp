//Sum of the Digits of a Given Number

#include <iostream>
using namespace std;

int sumaNumeros (){
    int a;
    cout << "Dame un numero: ";
    cin >> a;

    int b = a;
    int suma = 0;
    int residuo;
    while (a > 0){
        residuo = a % 10;
        a = a / 10;
        suma += residuo;
    }
    cout << "La suma de los digitos es: " << suma;
}

int main(){
    sumaNumeros();
    return 0;
}