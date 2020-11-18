#include <iostream>
#include <math.h>
#include "input.h"
#include "../../helpers/functions.cpp"
using namespace std;

int main()
{
    if (isPrime(NUMBER))
    {
        return NUMBER;
    }
    int maxPrimeFactor = 0;
    int sqrtOfNumber = sqrt(NUMBER);
    for (int i = sqrtOfNumber; i >= 1; i--)
    {
        if (NUMBER % i == 0 && isPrime(i))
        {
            maxPrimeFactor = i;
            break;
        }
    }
    cout << maxPrimeFactor << "\n";
    return 0;
}
