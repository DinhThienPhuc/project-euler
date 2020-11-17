#include <iostream>
#include "input.h"
#include "math.h"
using namespace std;

int getDiff(int n)
{
    if (n == 1)
    {
        return 0;
    }
    return getDiff(n - 1) + pow(n, 2) * (n - 1);
}

int main()
{
    int diff = getDiff(LIMIT);
    cout << diff << endl;
    return 0;
}
