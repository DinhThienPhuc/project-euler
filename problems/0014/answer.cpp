#include <iostream>
#include <iterator>
#include <map>
#include "input.h"
using namespace std;

map<long long, long long> cacheComputed;

long long countCollatz(long long number)
{
    if (cacheComputed[number] != 0)
    {
        return cacheComputed[number];
    }

    if (number % 2 == 0)
    {
        cacheComputed[number] = 1 + countCollatz(number / 2);
    }
    else
    {
        cacheComputed[number] = 2 + countCollatz((3 * number + 1) / 2);
    }

    return cacheComputed[number];
}

int main()
{
    long longestChain = 0;
    long result = 1;
    cacheComputed[1] = 1;

    for (long k = LIMIT / 2; k < LIMIT; k++)
    {
        if (countCollatz(k) > longestChain)
        {
            longestChain = countCollatz(k);
            result = k;
        }
    }

    cout << result << endl;

    return 0;
}
