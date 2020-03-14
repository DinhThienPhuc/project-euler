#include <iostream>
#include "input.h"
using namespace std;

int isPrimeFactor(int number);

int main()
{
  int ceiling_number = NUMBER;
  int max_prime_number = 1;

  for (int i = 2; i <= ceiling_number; i++)
  {
    if (isPrimeFactor(i) == 1 && ceiling_number % i == 0)
    {
      max_prime_number = i;
    }
  }

  cout << max_prime_number;
  return 0;
}
