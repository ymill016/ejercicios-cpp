// Find Perfect Numbers Between 1 and 500

#include <iostream>
using namespace std;

int main()
{
    cout << "perfect numbers bewteen 1 and 500\n";

    int i = 1, j = 1, sumaDivisores = 0;

    while (i <= 500)
    {
        while (j <= 500)
        {
            if (i > j)
            {
                if (i % j == 0)
                {
                    sumaDivisores += j;
                }
            }
            j++;
        }
        if (sumaDivisores == i)
        {
            cout << i << " ";
        }
        i++;
        j = 1;
        sumaDivisores = 0;
    }

    return 0;
}