#include <iostream>
#include "input.h"
using namespace std;

int main()
{
    int first_fib = FIRST_NUMBER;
    int second_fib = SECOND_NUMBER;
    int current_fib = first_fib + second_fib;
    int sum = SECOND_NUMBER;
    while (current_fib < CEILING_NUMBER)
    {
        first_fib = second_fib;
        second_fib = current_fib;
        current_fib = first_fib + second_fib;
        if (current_fib % 2 == 0)
        {
            sum += current_fib;
        }
    }
    cout << sum;
    return 0;
}