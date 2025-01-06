#include <iostream>
#include "input.h"
#include "math.h"
#include "vector"
#include "../../helpers/functions.cpp"
using namespace std;

int main()
{
    int result = 1, i = 1;
    bool check = true;
    int sqrtLimit = int(sqrt(LIMIT));
    vector<long> primes = getPrimesLessThan(LIMIT);
    vector<long> a(primes.size());

    for (size_t i = 0; i != primes.size(); ++i)
    {
        a[i] = 1;
        if (check)
        {
            if (primes[i] <= sqrtLimit)
            {
                a[i] = floor(log(LIMIT) / log(primes[i]));
            }
            else
            {
                check = false;
            }
        }
        result = result * pow(primes[i], a[i]);
    }

    cout << result << endl;

    return 0;
}