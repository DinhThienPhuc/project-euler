#include <iostream>
#include <math.h>
#include <vector>
#include "input.h"
using namespace std;

int main()
{
    long sum = 0;
    vector<int> originDigits;

    originDigits.push_back(1);

    for (int i = 1; i <= EXPONENT; i++)
    {
        vector<int> newDigits;
        int previousPlus = 0;

        for (vector<int>::iterator digit = originDigits.begin(); digit != originDigits.end(); ++digit)
        {
            int newDigit = (*digit * 2) % 10 + previousPlus;
            previousPlus = (*digit * 2) / 10;
            newDigits.push_back(newDigit);
        }
        if (previousPlus)
        {
            newDigits.push_back(previousPlus);
        }

        originDigits = newDigits;
    }

    for (vector<int>::iterator digit = originDigits.begin(); digit != originDigits.end(); ++digit)
    {
        sum += *digit;
    }

    cout << sum << endl;

    return 0;
}
