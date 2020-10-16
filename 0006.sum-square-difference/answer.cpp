#include <iostream>
#include "input.h"
#include "math.h"
using namespace std;

int main()
{
    int sum = LIMIT * (LIMIT + 1) / 2;
    int sumSqrt = (2 * LIMIT + 1) * (LIMIT + 1) * LIMIT / 6;
    int diff = pow(sum, 2) - sumSqrt;

    cout << diff << endl;
    return 0;
}
