#include <iostream>

int main() {
  uint32_t sumOfSquares = 0;
  uint32_t squareOfSum = 0;
  for (uint8_t number = 1; number <= 100; number++) {
    sumOfSquares += number * number;
    squareOfSum += number;
  }
  squareOfSum *= squareOfSum;
  std::cout << squareOfSum - sumOfSquares;
  return 0;
}