#include <cmath>
#include <iostream>

int main() {
  for (int a = 1; a <= 1000; a++)
    for (int b = 1; b <= 1000; b++)
      for (int c = 1; c <= 1000; c++)
        if (a + b + c == 1000 &&
            std::pow(a, 2) + std::pow(b, 2) == std::pow(c, 2)) {
          std::cout << a * b * c << std::endl;
          return 0;
        }
  return 0;
}