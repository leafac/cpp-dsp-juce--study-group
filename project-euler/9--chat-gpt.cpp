#include <iostream>
#include <cmath>

int main() {
    for (int a = 1; a < 1000; ++a) {
        for (int b = a + 1; b < 1000; ++b) {
            int c = 1000 - a - b;
            if (a * a + b * b == c * c) {
                std::cout << "The Pythagorean triplet (a, b, c) is: (" << a << ", " << b << ", " << c << ")\n";
                std::cout << "The product a  b  c is: " << a * b * c << std::endl;
                return 0;
            }
        }
    }
    return 0;
}