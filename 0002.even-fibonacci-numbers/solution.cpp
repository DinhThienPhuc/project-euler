#include <iostream>
#include "input.h"
using namespace std;

int main()
{
    int firstFib = FIRST_NUMBER;
    int secondFib = SECOND_NUMBER;
    int currentFib = firstFib + secondFib;
    int sum = SECOND_NUMBER;
    while (currentFib < LIMIT)
    {
        firstFib = secondFib;
        secondFib = currentFib;
        currentFib = firstFib + secondFib;
        if (currentFib % 2 == 0)
        {
            sum += currentFib;
        }
    }
    cout << sum;
    return 0;
}