#include <iostream>
#include "input.h"
using namespace std;

int main()
{
    int sum = 0;
    for (int i = 0; i < LIMIT; i++)
    {
        if (i % FIRST_NUMBER == 0 || i % SECOND_NUMBER == 0)
        {
            sum += i;
        }
    }
    cout << sum;
    return 0;
}