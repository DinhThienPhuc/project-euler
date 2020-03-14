#include <stdio.h>
#include <math.h>

int isPrimeFactor(int number)
{
    if (number == 2)
    {
        return 1;
    }
    int count = 0;
    for (int i = 3; i < sqrt(number); i += 2)
    {
        if (number % i == 0)
        {
            count++;
        }
    }
    if (count > 1)
    {
        return 0;
    }
    return 1;
}