#include <iostream>
#include "input.h"
using namespace std;

int getSumDivisibleBy(int num, int ceiling_number)
{
    int sum = 0;
    for (int i = 0; i < ceiling_number; i++)
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
    int sum = getSumDivisibleBy(FIRST_NUMBER, CEILING_NUMBER) +
              getSumDivisibleBy(SECOND_NUMBER, CEILING_NUMBER) -
              getSumDivisibleBy(FIRST_NUMBER * SECOND_NUMBER, CEILING_NUMBER);
    cout << sum;
    return 0;
}