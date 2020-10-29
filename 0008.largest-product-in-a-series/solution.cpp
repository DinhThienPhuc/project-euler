#include <iostream>
#include "input.h"
using namespace std;

long long getMultiple(int set[])
{
    long long result = 1;
    for (int i = 0; i < RANGE; i++)
    {
        if (set[i] == 0)
        {
            return 0;
        }
        result *= set[i];
    }
    return result;
}

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
        long long setValue = getMultiple(currentSet);
        if (setValue > maxValue)
        {
            maxValue = setValue;
        }
    }

    cout << maxValue << endl;
    return 0;
}
