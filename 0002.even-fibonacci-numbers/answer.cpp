#include <iostream>
#include "input.h"
using namespace std;

int main()
{
    int firstFib = 2;
    int secondFib = 8;
    int currentFib = firstFib + 4 * secondFib;
    int sum = firstFib + secondFib;
    while (currentFib < LIMIT)
    {
        sum += currentFib;
        firstFib = secondFib;
        secondFib = currentFib;
        currentFib = firstFib + 4 * secondFib;
    }
    cout << sum;
    return 0;
}