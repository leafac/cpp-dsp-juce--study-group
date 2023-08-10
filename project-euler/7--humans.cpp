#include <iostream>

int main() {
  long primeCandidate = 2;
  for (int positionInSequenceOfPrimes = 0; positionInSequenceOfPrimes < 10001;
       primeCandidate++) {
    bool isPrime = true;
    for (long potentialDivisor = 2; potentialDivisor < primeCandidate;
         potentialDivisor++)
      if (primeCandidate % potentialDivisor == 0) {
        isPrime = false;
        break;
      }
    if (isPrime)
      positionInSequenceOfPrimes++;
  }
  primeCandidate--;
  std::cout << primeCandidate;
  return 0;
}