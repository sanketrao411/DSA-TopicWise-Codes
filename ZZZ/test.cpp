#include <iostream>
#include <queue>
#include <unordered_set>

using namespace std;

int minOperations(int A, int B, int K) {
    if (A == B) return 0;
    queue<pair<long long, int>> q; // pair of (current value, number of operations)
    unordered_set<long long> visited; // to keep track of visited values

    q.push({A, 0});
    visited.insert(A);

    while (!q.empty()) {
        auto [current, ops] = q.front();
        q.pop();

        // Operation 1: current + 1
        if (current + 1 == B) return ops + 1;
        if (current + 1 < B && visited.find(current + 1) == visited.end()) {
            q.push({current + 1, ops + 1});
            visited.insert(current + 1);
        }

        // Operation 2: current * K
        if (current * K == B) return ops + 1;
        if (current * K < B && visited.find(current * K) == visited.end()) {
            q.push({current * K, ops + 1});
            visited.insert(current * K);
        }
    }

    return -1; // just a safety net, in a well-formed problem, we should never reach here
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int A, B, K;
        cin >> A >> B >> K;
        cout << minOperations(A, B, K) << endl;
    }
    return 0;
}
