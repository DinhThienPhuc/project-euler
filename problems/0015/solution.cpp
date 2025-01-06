#include <iostream>
#include <vector>
#include <map>
#include "input.h"
#include "../../helpers/functions.cpp"
using namespace std;

int main()
{
    map<int, int> numeratorDict;
    map<int, int> denominatorDict;

    for (int i = 0; i < SIZE; i++)
    {
        int numerator = i + SIZE + 1;
        int denominator = i + 1;

        vector<int> numeratorBases = getPrimeFactors(numerator);
        vector<int> denominatorBases = getPrimeFactors(denominator);

        for (vector<int>::iterator it = numeratorBases.begin(); it != numeratorBases.end(); ++it)
        {
            int maxExponent = floor(log(numerator) / log(*it));

            for (int e = maxExponent; e >= 1; e--)
            {
                int p = pow(*it, e);
                if (numerator % p == 0)
                {
                    if (numeratorDict[*it] != 0)
                    {
                        numeratorDict[*it] = numeratorDict[*it] + e;
                    }
                    else
                    {
                        numeratorDict[*it] = e;
                    }
                    break;
                }
            }
        }

        for (vector<int>::iterator it = denominatorBases.begin(); it != denominatorBases.end(); ++it)
        {
            int maxExponent = floor(log(denominator) / log(*it));

            for (int e = maxExponent; e >= 1; e--)
            {
                int p = pow(*it, e);
                if (denominator % p == 0)
                {
                    if (denominatorDict[*it] != 0)
                    {
                        denominatorDict[*it] = denominatorDict[*it] + e;
                    }
                    else
                    {
                        denominatorDict[*it] = e;
                    }
                    break;
                }
            }
        }
    }

    map<int, int> newNumeratorDict;
    map<int, int> newDenominatorDict;

    for (map<int, int>::iterator itr = numeratorDict.begin(); itr != numeratorDict.end(); ++itr)
    {
        int base = itr->first;
        if (denominatorDict[base] != 0)
        {
            newNumeratorDict[base] = numeratorDict[base] - denominatorDict[base];
        }
        else
        {
            newNumeratorDict[base] = numeratorDict[base];
        }
    }

    for (map<int, int>::iterator itr = denominatorDict.begin(); itr != denominatorDict.end(); ++itr)
    {
        int base = itr->first;
        if (numeratorDict[base] != 0)
        {
            newDenominatorDict[base] = 0;
        }
        else
        {
            newDenominatorDict[base] = denominatorDict[base];
        }
    }

    long long numerator = 1;
    long long denominator = 1;

    for (map<int, int>::iterator itr = newNumeratorDict.begin(); itr != newNumeratorDict.end(); ++itr)
    {
        numerator *= pow(itr->first, itr->second);
    }

    for (map<int, int>::iterator itr = newDenominatorDict.begin(); itr != newDenominatorDict.end(); ++itr)
    {
        denominator *= pow(itr->first, itr->second);
    }

    cout << "C++: " << numerator / denominator << "  - (solution)" << endl;

    return 0;
}
