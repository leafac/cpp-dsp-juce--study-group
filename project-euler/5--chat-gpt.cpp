#include <iostream>

// Function to check if a number is divisible by all numbers from 1 to 20
bool isDivisible(int number) {
    for (int i = 1; i <= 20; i++) {
        if (number % i != 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int smallestNumber = 1;

    while (true) {
        if (isDivisible(smallestNumber)) {
            break;
        }
        smallestNumber++;
    }

    std::cout << "The smallest number divisible by all numbers from 1 to 20 is: " << smallestNumber << std::endl;

    return 0;
}