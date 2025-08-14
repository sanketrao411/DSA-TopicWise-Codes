#include <iostream>
#include <vector>

const int MOD = 998244353;

int main() {
    int n, k;
    std::cin >> n >> k;

    std::vector<std::vector<int>> dp(k + 1, std::vector<int>(n + 1, 0));
    dp[0][0] = 1;

    for (int i = 1; i <= k; ++i) {
        for (int j = 1; j <= n; ++j) {
            for (int x = 1; x <= 6; ++x) {
                if (j - x >= 0) {
                    dp[i][j] = (dp[i][j] + dp[i - 1][j - x]) % MOD;
                }
            }
        }
    }

    int numerator = dp[k][n];
    int denominator = 1;
    for (int i = 0; i < k; ++i) {
        denominator = (denominator * 6) % MOD;
    }

    // Calculate the modular inverse of the denominator
    int denominator_inverse = 1;
    int base = denominator;
    int exp = MOD - 2; // Fermat's Little Theorem

    while (exp > 0) {
        if (exp % 2 == 1) {
            denominator_inverse = (denominator_inverse * base) % MOD;
        }
        base = (base * base) % MOD;
        exp /= 2;
    }

    int result = (numerator * denominator_inverse) % MOD;
    std::cout << result << std::endl;

    return 0;
}
