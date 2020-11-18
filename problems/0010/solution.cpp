#include <iostream>
#include "input.h"
#include "../../helpers/functions.cpp"
using namespace std;

int main()
{
    long sum = 2 + 3;
    long lowerBound = 1;
    long upperBound = floor(LIMIT - 1) / 6;

    for (long k = lowerBound; k <= upperBound; k++)
    {
        long num1 = 6 * k - 1;
        long num2 = 6 * k + 1;
        if (isPrime(num1))
        {
            sum += num1;
        }
        if (isPrime(num2))
        {
            sum += num2;
        }
    }

    cout << sum << endl;

    return 0;
}
