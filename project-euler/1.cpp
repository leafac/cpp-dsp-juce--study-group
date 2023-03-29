#include <iostream>

int main() {
  int sum = 0;
  for (int candidate = 1; candidate < 1000; candidate++)
    if (candidate % 3 == 0 || candidate % 5 == 0)
      sum += candidate;
  std::cout << sum;
  return 0;
}