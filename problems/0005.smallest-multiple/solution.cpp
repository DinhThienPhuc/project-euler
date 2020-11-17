#include <iostream>
#include "input.h"
#include "../functions.cpp"
using namespace std;

int main()
{
    long smallestMultiple = getSmallestMultiple(2, 3);

    int i = 4;
    while (i <= LIMIT)
    {
        smallestMultiple = getSmallestMultiple(smallestMultiple, i);
        i++;
    }

    cout << smallestMultiple << endl;
    return 0;
}
