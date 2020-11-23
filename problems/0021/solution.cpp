#include <iostream>
#include "vector"
#include "algorithm"
#include "input.h"
#include "../../helpers/functions.cpp"
using namespace std;

int main()
{
    vector<long> amicableNumbersUnderLimit;

    for (long n = 2; n <= LIMIT; n++)
    {
        if (includes(amicableNumbersUnderLimit, n))
        {
            continue;
        }

        vector<long> properDivisors = getProperDivisorsOf(n);
        long otherNumber = getSumOfListNumbers(properDivisors);

        if (otherNumber == n)
        {
            continue;
        }

        vector<long> properDivisorsOfOther = getProperDivisorsOf(otherNumber);
        long originNumber = getSumOfListNumbers(properDivisorsOfOther);

        if (originNumber != n)
        {
            continue;
        }

        amicableNumbersUnderLimit.push_back(n);
        amicableNumbersUnderLimit.push_back(otherNumber);
    }

    long sum = getSumOfListNumbers(amicableNumbersUnderLimit);

    cout << "C++: " << sum << "  - (solution)" << endl;
    return 0;
}
