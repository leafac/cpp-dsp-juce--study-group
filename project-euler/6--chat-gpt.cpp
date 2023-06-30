#include <iostream>

int main() {
    int limit = 100;
    int sumOfSquares = 0;
    int squareOfSum = 0;

    // Calculate the sum of squares
    for (int i = 1; i <= limit; i++) {
        sumOfSquares += i * i;
    }

    // Calculate the square of sum
    int sum = (limit * (limit + 1)) / 2; // Sum of first 'limit' natural numbers
    squareOfSum = sum * sum;

    // Calculate the difference
    int difference = squareOfSum - sumOfSquares;

    std::cout << "The difference between the sum of squares and the square of sum is: " << difference << std::endl;

    return 0;
}