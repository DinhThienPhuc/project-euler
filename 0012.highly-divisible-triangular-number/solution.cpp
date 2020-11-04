#include <iostream>
#include <vector>
#include "input.h"
#include "../functions.cpp"
using namespace std;

int main()
{
    long n = 1;
    int count = 1;
    while (count < DIVISORS_NUMBER)
    {
        long triangleNumber = n * (n + 1) / 2;
        vector<int> arr = getPrimeFactors(triangleNumber);
        count = 1;

        long tempNumber = triangleNumber;
        for (vector<int>::iterator it = arr.begin(); it != arr.end(); ++it)
        {
            int maxExponent = floor(log(tempNumber) / log(*it));
            int exponent = 1;

            for (int e = maxExponent; e >= 1; e--)
            {
                int p = pow(*it, e);
                if (tempNumber % p == 0)
                {
                    count *= (e + 1);
                    tempNumber = tempNumber / p;
                    break;
                }
            }
        }

        if (count < DIVISORS_NUMBER)
        {
            n++;
        }
    }

    int triangleNumber = n * (n + 1) / 2;

    cout << triangleNumber << endl;

    return 0;
}
