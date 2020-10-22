#include <iostream>
#include "input.h"
#include "../functions.cpp"
using namespace std;

int main()
{
    int count = 1;
    int i = 3;
    long result = 0;
    while (count < PRIME_NUMBER_AT)
    {
        if (isPrime(i))
        {
            count += 1;
        }
        if (count != PRIME_NUMBER_AT)
        {
            i++;
        }
        else
        {
            result = i;
            break;
        }
    }

    cout << result << endl;

    return 0;
}
