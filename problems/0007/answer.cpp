#include <iostream>
#include "input.h"
#include "../../helpers/functions.cpp"
using namespace std;

int main()
{
    int count = 1;
    int i = 3;
    long result = 1;
    while (count != PRIME_NUMBER_AT)
    {
        result += 2;
        if (isPrime(result))
        {
            count = count + 1;
        }
    }

    cout << result << endl;
    return 0;
}
