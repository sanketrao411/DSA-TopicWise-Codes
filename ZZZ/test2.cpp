#include <iostream>

using namespace std;

int minOperations(int A, int B, int K) {
  // Base cases: if A is already B or cannot reach B
  if (A == B) {
    return 0;
  } else if (A > B && K <= 1) {
    return -1;
  }

  // Initialize operations to 0
  int operations = 0;

  // Loop until target is reached
  while (A < B) {
    // Check if multiplication by K is beneficial
    if (K * A <= B) {
      // Use multiplication operation
      A *= K;
      operations++;
    } else {
      // Use addition operation
      A++;
      operations++;
    }
  }

  return operations;
}

int main() {
  int T;
  cin >> T;

  while (T--) {
    int A, B, K;
    cin >> A >> B >> K;

    int operations = minOperations(A, B, K);
    if (operations == -1) {
      cout << "Impossible" << endl;
    } else {
      cout << operations << endl;
    }
  }

  return 0;
}
