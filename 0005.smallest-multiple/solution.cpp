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
        cout << smallestMultiple << endl;
        cout << i << endl;
        smallestMultiple = getSmallestMultiple(smallestMultiple, i);
        cout << "--" << endl;
        cout << smallestMultiple << endl;

        cout << "-----------------" << endl;
        i++;
    }

    cout << smallestMultiple << endl;
    return 0;
}
