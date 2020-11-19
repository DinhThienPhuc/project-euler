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
            long digitCalculation = *digit * 2 + previousPlus;
            int remainder = digitCalculation % 10;
            previousPlus = digitCalculation / 10;
            newDigits.push_back(remainder);
        }

        while (previousPlus > 0)
        {
            newDigits.push_back(previousPlus % 10);
            previousPlus /= 10;
        }

        originDigits = newDigits;
    }

    for (vector<int>::iterator digit = originDigits.begin(); digit != originDigits.end(); ++digit)
    {
        sum += *digit;
    }

    cout << "C++: " << sum << "  - (solution)" << endl;

    return 0;
}
