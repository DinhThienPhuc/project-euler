#include <iostream>
#include "input.h"
using namespace std;

int getSumDivisibleBy(int num, int limit)
{
    int sum = 0;
    for (int i = 0; i < limit; i++)
    {
        if (i % num == 0)
        {
            sum += i;
        }
    }
    return sum;
}

int main()
{
    int sum = getSumDivisibleBy(FIRST_NUMBER, LIMIT) +
              getSumDivisibleBy(SECOND_NUMBER, LIMIT) -
              getSumDivisibleBy(FIRST_NUMBER * SECOND_NUMBER, LIMIT);
    cout << sum;
    return 0;
}