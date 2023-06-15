#include <iostream>

int main() {
  for (int candidate = 11;; candidate++) {
    bool divisible = true;
    for (int divisor = 2; divisor <= 20; divisor++)
      if (candidate % divisor != 0) {
        divisible = false;
        break;
      }
    if (divisible) {
      std::cout << candidate;
      break;
    }
  }

  return 0;
}