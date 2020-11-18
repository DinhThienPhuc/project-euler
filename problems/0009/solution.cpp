#include <iostream>
#include "input.h"
#include "../../helpers/functions.cpp"
using namespace std;

int main()
{
    int upperBound = floor(SUM / sqrt(2));
    int lowerBound = floor(SUM / 3);
    int product = 1;

    for (int c = lowerBound; c <= upperBound; c++)
    {
        bool flag = false;
        for (int a = 1; a <= lowerBound; a++)
        {
            int b = SUM - c - a;
            if (pow(a, 2) + pow(b, 2) == pow(c, 2))
            {
                product = a * b * c;
                flag = true;
                break;
            }
        }
        if (flag == true)
        {
            break;
        }
    }

    cout << product << endl;

    return 0;
}
