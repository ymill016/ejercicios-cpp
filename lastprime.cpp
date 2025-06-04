// Find the Last Prime Number Before a Given Number

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Type a number: ";
    cin >> n;
    int divisors = 0;

    if (n <= 1)
    {
        cout << "Invalido. Debes ingresar un numero mayor a 1\n";
    }
    for (int i = n - 1; i >= 2; i--)
    {
        divisors = 0;
        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                divisors++;
            }
        }
        if (divisors == 2)
        {
            cout << "El numero primo antes de " << n << " es " << i << endl;
            break;
        }
    }
    return 0;
}