#include <iostream>

int main() {
  int previous_2 = 0;
  int previous_1 = 1;
  int current = 0;

  int sum = 0;

  while (true) {
    current = previous_2 + previous_1;
    previous_2 = previous_1;
    previous_1 = current;
    if (current > 4000000)
      break;
    if (current % 2 == 0)
      sum += current;
  }

  std::cout << sum;

  return 0;
}