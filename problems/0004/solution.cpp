#include <iostream>
#include <math.h>
#include "input.h"
#include "../../helpers/functions.cpp"
using namespace std;

int main()
{
    int largestPalindrome = 0;
    int base = 10;
    int upperBound = pow(base, NUMBER_LETTERS) - 1;
    int lowerBound = pow(base, NUMBER_LETTERS - 1);

    for (int i = upperBound; i >= lowerBound; i--)
    {
        for (int j = upperBound; j >= lowerBound; j--)
        {
            int multiResult = i * j;
            if (isPalindrome(multiResult) && largestPalindrome < multiResult)
            {
                largestPalindrome = multiResult;
            }
        }
    }
    cout << largestPalindrome << endl;
    return 0;
}
