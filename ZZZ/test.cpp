#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>

using namespace std;

// Function to generate prime numbers up to n using Sieve of Eratosthenes
vector<int> generatePrimes(int n) {
    vector<bool> isPrime(n + 1, true);
    vector<int> primes;
    for (int p = 2; p * p <= n; p++) {
        if (isPrime[p]) {
            for (int i = p * p; i <= n; i += p)
                isPrime[i] = false;
        }
    }
    for (int p = 2; p <= n; p++) {
        if (isPrime[p])
            primes.push_back(p);
    }
    return primes;
}

int minOperations(int n, const vector<int>& primes) {
    // Create a vector to store the minimum number of operations for each number from 0 to n
    vector<int> dp(n + 1, INT_MAX);
    dp[0] = 0; // Base case

    // Iterate through all prime numbers
    for (int prime : primes) {
        // Update dp[i] for all i such that i + prime <= n
        for (int i = prime; i <= n; i++) {
            if (dp[i - prime] != INT_MAX) {
                dp[i] = min(dp[i], dp[i - prime] + 1);
            }
        }
    }

    return dp[n];
}

int main() {
    int n;
    cout << "Enter the integer: ";
    cin >> n;

    // Generate prime numbers up to n
    vector<int> primes = generatePrimes(n);

    // Calculate the minimum number of operations
    int minOps = minOperations(n, primes);

    cout << "Minimum number of operations to destroy the integer: " << minOps << endl;

    return 0;
}
