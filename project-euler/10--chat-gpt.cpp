#include <iostream>
#include <vector>

// Function to implement the Sieve of Eratosthenes
std::vector<int> sieveOfEratosthenes(int n) {
    std::vector<bool> prime(n+1, true);
    prime[0] = prime[1] = false;
    
    for (int p = 2; p * p <= n; p++) {
        if (prime[p]) {
            for (int i = p * p; i <= n; i += p) {
                prime[i] = false;
            }
        }
    }

    std::vector<int> primes;
    for (int p = 2; p <= n; p++) {
        if (prime[p]) {
            primes.push_back(p);
        }
    }
    
    return primes;
}

// Main function to calculate the sum of primes below two million
int main() {
    const int limit = 2000000;
    std::vector<int> primes = sieveOfEratosthenes(limit);
    long long sum = 0;

    for (int prime : primes) {
        sum += prime;
    }

    std::cout << "The sum of all primes below two million is: " << sum << std::endl;

    return 0;
}