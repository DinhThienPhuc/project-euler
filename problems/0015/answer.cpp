#include <iostream>
#include <iomanip>
#include "input.h"
using namespace std;

int main()
{
    double result = 1;
    for (int i = 1; i <= SIZE; i++)
    {
        double numerator = static_cast<double>(SIZE + i);
        double denominator = static_cast<double>(i);
        result = result * numerator / denominator;
    }

    cout << "C++: " << long(result) << "  - (answer)" << endl;

    return 0;
}
