#include <stdio.h>
#include <math.h>
#include <string>
using namespace std;

bool isPrime(int number)
{
    if (number <= 1)
    {
        return false;
    }
    for (int i = 2; i < number; i++)
    {
        if (number % i == 0)
        {
            return false;
        }
    }
    return true;
}

bool isPalindrome(int number)
{
    string stringNumber = to_string(number);
    int len = stringNumber.length();
    int loopRange = int(len / 2);

    for (int i = 0; i < loopRange; i++)
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