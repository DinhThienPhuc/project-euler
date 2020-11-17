#include <iostream>
#include <math.h>
#include "input.h"
#include "../functions.cpp"
using namespace std;

int main()
{
    int largestPalindrome = 0;
    int base = 10;
    int primeFactor = 11;
    int upperBound = pow(base, NUMBER_LETTERS) - 1;
    int lowerBound = pow(base, NUMBER_LETTERS - 1);

    int count = int(upperBound / primeFactor);
    int a = count * primeFactor;
    while (a >= lowerBound)
    {
        for (int b = upperBound; b >= lowerBound; b--)
        {
            int multiResult = a * b;
            if (isPalindrome(multiResult) && largestPalindrome < multiResult)
            {
                largestPalindrome = multiResult;
            }
        }
        count = count - 1;
        a = count * primeFactor;
    }

    cout << largestPalindrome << endl;
    return 0;
}
