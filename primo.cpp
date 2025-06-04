//winth a number find if its a prime number or not

#include <iostream>
using namespace std;

int main (){
    int number;

    cout << "Input a number: " ;
    cin >> number;

    int divisores = 0;
    //uso de for para encontrar divisores
    for ( int i = 1; i<= number; i++){
        if (number % i == 0){
            divisores++;
        }
    }
    if (divisores == 2){
        cout << "Es un numero primo\n";
    }else{
        cout << "No es primo\n";
    }
    return 0;
}