#include <bitset>
#include <iostream>

int main() {
  int maximum = 2000000;
  long sum = 0;
  std::bitset<2000001> primes;
  for (int number = 2; number < maximum; number++) {
    if (primes[number] == 1)
      continue;

    sum += number;

    int multiplier = 2;
    while (true) {
      int composite = number * multiplier;
      if (composite >= maximum)
        break;
      primes[composite] = 1;
      multiplier++;
    }
  }

  std::cout << sum << std::endl;
  return 0;
}