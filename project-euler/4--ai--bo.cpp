#include <iostream>

bool isPalindrome(int number) {
    int reverse = 0;
    int originalNumber = number;

    while (number > 0) {
        int remainder = number % 10;
        reverse = reverse * 10 + remainder;
        number = number / 10;
    }

    return originalNumber == reverse;
}

int largestPalindromeProduct() {
    int largestPalindrome = 0;

    for (int i = 100; i < 1000; i++) {
        for (int j = 100; j < 1000; j++) {
            int product = i * j;
            if (isPalindrome(product) && product > largestPalindrome) {
                largestPalindrome = product;
            }
        }
    }

    return largestPalindrome;
}

int main() {
    int result = largestPalindromeProduct();
    std::cout << "The largest palindrome made from the product of two 3-digit numbers is: " << result << std::endl;

    return 0;
}