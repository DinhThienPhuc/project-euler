#include <iostream>
#include "input.h"
using namespace std;

int main()
{
    int sum = 0;
    for (int i = 0; i < ceiling_number; i++)
    {
        if (i % first_number == 0 || i % second_number == 0)
        {
            sum += i;
        }
    }
    cout << sum;
    return 0;
}