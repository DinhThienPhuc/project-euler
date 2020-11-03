#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include "input.h"

using namespace std;

int main()
{
    vector<int> arr;
    int zeroAscii = 48;
    int addedToBefore = 0;

    for (int charIndex = NUMBER_LENGTH - 1; charIndex >= 0; charIndex--)
    {

        int sum = 0;

        for (int i = 0; i < ARRAY_NUMBERS_LENGTH; i++)
        {
            string STR_NUM = STRING_NUMBERS[i];
            int num = int(STR_NUM[charIndex]) - zeroAscii;
            sum += num;
        }

        sum += addedToBefore;

        int remainder = sum % 10;
        arr.push_back(remainder);
        addedToBefore = floor(sum / 10);
    }

    while (addedToBefore >= 10)
    {
        int remainder = addedToBefore % 10;
        arr.push_back(remainder);
        addedToBefore = floor(addedToBefore / 10);
    }

    arr.push_back(addedToBefore);

    for (vector<int>::reverse_iterator it = arr.rbegin(); it != arr.rend(); ++it)
    {

        cout << *it;
    }

    return 0;
}
