#include <iostream>

bool isPrime(long number) {
  for (long potentialFactor = 2; potentialFactor < number; potentialFactor++)
    if (number % potentialFactor == 0)
      return false;
  return true;
}

int main() {
  long number = 600851475143;
  for (long potentialFactor = number - 1; potentialFactor > 0; potentialFactor--)
    if (number % potentialFactor == 0 && isPrime(potentialFactor)) {
      std::cout << potentialFactor;
      break;
    }
  return 0;
}