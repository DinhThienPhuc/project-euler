#include <iostream>
#include "input.h"
#include "../functions.cpp"
using namespace std;

int main()
{
    int currentSet[RANGE];
    long long maxValue = 1;

    for (int i = 0; i < THOUSAND - RANGE; i++)
    {
        for (int j = 0; j < RANGE; j++)
        {
            currentSet[j] = THOUSAND_DIGITS[i + j];
        }
        long long setValue = getMultipleOfSet(currentSet, RANGE);
        if (setValue > maxValue)
        {
            maxValue = setValue;
        }
    }

    cout << maxValue << endl;
    return 0;
}
