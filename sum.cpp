//Mostrar n términos de números naturales y su suma

#include <iostream>
using namespace std;

int main (){
    int n; 

    //pedir un numero al usuario
    cout << "Ingresa el numero de terminos: ";
    cin >> n;

    int suma = 0;
    for (int i = 1; i <= n; i++){
        cout << i << " ";
        suma += i;
    }

    cout << "\nLa suma todos los naturales es: " << suma << "\n";
    return 0;
}