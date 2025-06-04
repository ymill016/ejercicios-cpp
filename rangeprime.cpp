//Find Prime Numbers Within a Range

#include <iostream>
using namespace std;

int main (){
    int startingRange, endingRange;

    cout << "-- Encontrar numeros primos en un rango --\n";
    cout << "Ingresa el numero en que se iniciara: ";
    cin >> startingRange;
    cout << "Ingresa el numero en que se terminara: ";
    cin >> endingRange;
    int divisores = 0;

    for (int startingRange = 1; startingRange<= endingRange; startingRange++ ){
        divisores = 0;
        for (int j = 1; j <= startingRange; j++){
            if (startingRange % j == 0){
                divisores ++;
            }
        }
        if (divisores == 2){
            cout << startingRange << " ";
        }
    }
    return 0;
}