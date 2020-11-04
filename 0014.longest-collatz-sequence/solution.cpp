#include <iostream>
#include "input.h"
using namespace std;

int main()
{
    long startNumber = LIMIT - 1;
    long result = 1;
    long long maxCount = 1;

    while (startNumber > 1)
    {
        long n = startNumber;
        long count = 1;
        while (n > 1)
        {
            if (n % 2 == 0)
            {
                n = n / 2;
            }
            else
            {
                n = 3 * n + 1;
            }
            count++;
        }
        count++;

        if (count > maxCount)
        {
            maxCount = count;
            result = startNumber;
        }

        startNumber--;
    }

    cout << result << endl;
    return 0;
}
