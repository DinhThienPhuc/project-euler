#include <iostream>
#include <math.h>
#include "input.h"
#include "../../helpers/functions.cpp"
using namespace std;

int main()
{
    int halfOfSum = SUM / 2;
    int mLimit = sqrt(halfOfSum) - 1;

    for (int m = 2; m <= mLimit; m++)
    {
        if (halfOfSum % m == 0)
        {
            int remainder = halfOfSum / m;

            while (remainder % 2 == 0)
            {
                remainder /= 2;
            }

            int k = 0;
            if (m % 2 == 1)
            {
                k = m + 2;
            }
            else
            {
                k = m + 1;
            }

            while (k < 2 * m && k <= remainder)
            {
                if (remainder % k == 0 && getGreatestCommonDivisor(k, m) == 1)
                {
                    int d = halfOfSum / (k * m);
                    int n = k - m;
                    int a = d * (m * m - n * n);
                    int b = 2 * d * m * n;
                    int c = d * (m * m + n * n);
                    cout << a * b * c << endl;
                }
                k += 2;
            }
        }
    }

    return 0;
}
