#include <iostream>
#include "input.h"
using namespace std;

int getSumDivisibleBy(int num, int ceiling_num)
{
    int sum = 0;
    for (int i = 0; i < ceiling_num; i++)
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
    int sum = getSumDivisibleBy(first_number, ceiling_number) +
              getSumDivisibleBy(second_number, ceiling_number) -
              getSumDivisibleBy(first_number * second_number, ceiling_number);
    cout << sum;
    return 0;
}