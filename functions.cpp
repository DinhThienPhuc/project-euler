#include <stdio.h>
#include <math.h>
#include <string>
#include <vector>
using namespace std;

bool isPrime(long number)
{
    if (number <= 1)
    {
        return false;
    }
    for (long i = 2; i < number; i++)
    {
        if (number % i == 0)
        {
            return false;
        }
    }
    return true;
}

bool isPalindrome(long number)
{
    string stringNumber = to_string(number);
    long len = stringNumber.length();
    long loopRange = long(len / 2);

    for (long i = 0; i < loopRange; i++)
    {
        char c1 = stringNumber[i];
        char c2 = stringNumber[len - i - 1];
        if (!isdigit(c1) || !isdigit(c2) || c1 != c2)
        {
            return false;
        }
    }

    return true;
}

long getGreatestMultiple(long a, long b)
{
    long less = a > b ? b : a;
    long greater = a > b ? a : b;
    long greatestMultiple = 1;

    for (long i = less; i >= 1; i--)
    {
        if (less % i == 0 && greater % i == 0)
        {
            greatestMultiple = i;
            break;
        }
    }
    return greatestMultiple;
}

long getSmallestMultiple(long a, long b)
{
    return abs(a * b) / getGreatestMultiple(a, b);
}

vector<long> getPrimesLessThan(long num)
{
    vector<long> arr;
    for (long i = 2; i <= num; i++)
    {
        if (isPrime(i))
        {
            arr.push_back(i);
        }
    }
    return arr;
}