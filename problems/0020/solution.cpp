#include <iostream>
#include "input.h"
#include "vector"
#include "math.h"
#include "../../helpers/functions.cpp"
using namespace std;

int main()
{
    long sum = 0;
    long num = 2;
    vector<long> originNumberDigits;

    originNumberDigits.push_back(1);

    while (num <= NUMBER)
    {
        long previousExtra = 0;
        vector<long> numberDigits;

        for (vector<long>::iterator it = originNumberDigits.begin(); it != originNumberDigits.end(); ++it)
        {
            long digitCalculation = *it * num + previousExtra;
            long remainder = digitCalculation % 10;
            previousExtra = digitCalculation / 10;
            numberDigits.push_back(remainder);
        }

        while (previousExtra > 0)
        {
            numberDigits.push_back(previousExtra % 10);
            previousExtra /= 10;
        }

        num += 1;
        originNumberDigits = numberDigits;
    }

    for (vector<long>::iterator it = originNumberDigits.begin(); it != originNumberDigits.end(); ++it)
    {
        sum += *it;
    }

    cout << sum << endl;

    return 0;
}
