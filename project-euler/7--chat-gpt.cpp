#include <iostream>
#include <vector>

bool is_prime(int n) {
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;

    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}

int find_nth_prime(int n) {
    if (n == 1)
        return 2;

    int count = 1;
    int num = 3;

    while (count < n) {
        if (is_prime(num))
            count++;
        if (count < n)
            num += 2;  // Skip even numbers
    }

    return num;
}

int main() {
    int n = 10001;
    int nth_prime = find_nth_prime(n)
;
    
    std::cout << "The " << n << "th prime number is: " << nth_prime << std::endl;
    
    return 0;
}