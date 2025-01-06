#include <stdio.h>
#include <math.h>
#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

bool isPrime(long number)
{
    if (number == 1)
    {
        return false;
    }
    if (number < 4)
    {
        return true; // 2 and 3 are prime
    }
    if (number % 2 == 0)
    {
        return false;
    }
    if (number < 9)
    {
        return true; // we have already excluded 4,6 and 8.
    }
    if (number % 3 == 0)
    {
        return false;
    }

    long r = floor(sqrt(number)); // sqrt(n) rounded to the greatest integer r so that r*r<=n
    long f = 5;

    while (f <= r)
    {
        if (number % f == 0)
        {
            return false;
        }
        if (number % (f + 2) == 0)
        {
            return false;
        }
        f = f + 6;
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

long long getMultipleOfSet(int set[], int range)
{
    long long result = 1;
    for (int i = 0; i < range; i++)
    {
        if (set[i] == 0)
        {
            return 0;
        }
        result *= set[i];
    }
    return result;
}

bool isPerfectSquare(long double x)
{
    // Find floating point value of
    // square root of x.
    long double sr = sqrt(x);

    // If square root is an integer
    return (sr - floor(sr)) == 0;
}

int getGreatestCommonDivisor(int a, int b)
{
    if (b == 0)
        return a;
    return getGreatestCommonDivisor(b, a % b);
}

vector<int> getPrimeFactors(int n)
{
    vector<int> arr;

    // Print the number of 2s that divide n
    bool hasThisPrime = false;
    while (n % 2 == 0)
    {
        if (!hasThisPrime)
        {
            arr.push_back(2);
            hasThisPrime = true;
        }
        n = n / 2;
    }

    // n must be odd at this point. So we can skip one element (Note i = i +2)
    for (int i = 3; i <= sqrt(n); i = i + 2)
    {
        // While i divides n, print i and divide n
        bool hasThisPrime = false;
        while (n % i == 0)
        {
            if (!hasThisPrime)
            {
                arr.push_back(i);
                hasThisPrime = true;
            }
            n = n / i;
        }
    }

    // This condition is to handle the case when n is a prime number greater than 2
    if (n > 2)
    {
        arr.push_back(n);
    }

    return arr;
}

long long factorial(long n)
{
    return (n == 1 || n == 0) ? 1 : n * factorial(n - 1);
}

long long factorialPartition(long start, long end)
{
    long result = 1;

    for (long i = start; i <= end; i++)
    {
        result *= i;
    }

    return result;
}

map<int, int> getBaseExponentDict(long long number, vector<int> bases)
{
    map<int, int> baseExponentDict;

    for (vector<int>::iterator it = bases.begin(); it != bases.end(); ++it)
    {
        int maxExponent = floor(log(number) / log(*it));

        for (int e = maxExponent; e >= 1; e--)
        {
            int p = pow(*it, e);
            if (number % p == 0)
            {
                if (baseExponentDict[*it] != 0)
                {
                    baseExponentDict[*it] = baseExponentDict[*it] + e;
                }
                else
                {
                    baseExponentDict[*it] = e;
                }
                break;
            }
        }
    }

    return baseExponentDict;
}

vector<long> getProperDivisorsOf(long number)
{
    vector<long> arr;
    arr.push_back(1);

    for (long n = 2; n < number; n++)
    {
        if (number % n == 0)
        {
            arr.push_back(n);
        }
    }

    return arr;
}

long getSumOfListNumbers(vector<long> list)
{
    long sum = 0;

    for (vector<long>::iterator it = list.begin(); it != list.end(); ++it)
    {
        sum += *it;
    }

    return sum;
}

bool includes(vector<long> arr, long number)
{
    if (find(arr.begin(), arr.end(), number) != arr.end())
    {
        return true;
    }
    return false;
}
