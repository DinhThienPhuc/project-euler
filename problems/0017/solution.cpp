#include <iostream>
#include <map>
#include <math.h>
#include <string>
#include "input.h"
using namespace std;

string getNumberLetterOfTwoDigitNumber(map<int, string> numberDict, int n)
{
    if (n <= 19)
    {
        return numberDict[n];
    }

    if (n <= 99)
    {
        // 20 ~ 99
        int unit = n % 10;
        int tensOf = n - unit;
        string numberLetter = numberDict[tensOf] + (unit == 0 ? "" : numberDict[unit]);
        return numberLetter;
    }
    return "";
}

int main()
{
    // create a map that stores strings indexed by strings
    map<int, string> numberDict;

    numberDict[1] = "one";
    numberDict[2] = "two";
    numberDict[3] = "three";
    numberDict[4] = "four";
    numberDict[5] = "five";
    numberDict[6] = "six";
    numberDict[7] = "seven";
    numberDict[8] = "eight";
    numberDict[9] = "nine";
    numberDict[10] = "ten";
    numberDict[11] = "eleven";
    numberDict[12] = "twelve";
    numberDict[13] = "thirteen";
    numberDict[14] = "fourteen";
    numberDict[15] = "fifteen";
    numberDict[16] = "sixteen";
    numberDict[17] = "seventeen";
    numberDict[18] = "eighteen";
    numberDict[19] = "nineteen";
    numberDict[20] = "twenty";
    numberDict[30] = "thirty";
    numberDict[40] = "forty";
    numberDict[50] = "fifty";
    numberDict[60] = "sixty";
    numberDict[70] = "seventy";
    numberDict[80] = "eighty";
    numberDict[90] = "ninety";
    numberDict[1000] = "onethousand";

    long numberLetterCounts = 0;

    for (int n = 1; n <= MAX_NUMBER; n++)
    {
        if (n <= 99)
        {
            string numberLetter = getNumberLetterOfTwoDigitNumber(numberDict, n);
            numberLetterCounts += numberLetter.length();
            continue;
        }

        // 100 ~ 999
        if (n <= 999)
        {
            int hundredUnit = floor(n / 100);
            int tensOf = n - hundredUnit * 100;
            string numberLetter = numberDict[hundredUnit] + "hundred";

            string temp = getNumberLetterOfTwoDigitNumber(numberDict, tensOf);
            if (temp != "")
            {
                numberLetter = numberLetter + "and" + temp;
            }
            numberLetterCounts += numberLetter.length();
            continue;
        }

        if (n <= 9999)
        {
            string numberLetter = numberDict[n];
            numberLetterCounts += numberLetter.length();
        }
    }

    cout << "C++: " << numberLetterCounts << "  - (solution)" << endl;

    return 0;
}
