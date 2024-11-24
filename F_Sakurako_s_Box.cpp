#include <bits/stdc++.h>
using namespace std;

int MOD = 1e9 + 7;
long long modInverse(long long x, long long mod) {
    long long result = 1;
    long long power = mod - 2;

    while (power) {
        if (power % 2) {
            result = (result * x) % mod;
        }
        x = (x * x) % mod;
        power /= 2;
    }
    return result;
}

long long expectedValue(int n,vector<int>& A) {
    long long totalSum = accumulate(A.begin(), A.end(), 0LL) % MOD;
    long long sumOfSquares = 0;

    for (int i = 0; i < n; ++i) {
        sumOfSquares = (sumOfSquares + 1LL * A[i] * A[i]) % MOD;
    }

    long long S = (totalSum * totalSum % MOD - sumOfSquares + MOD) % MOD;
    S = S * modInverse(2, MOD) % MOD;

    long long P = 2 * S % MOD;
    long long Q = 1LL * n * (n - 1) % MOD;

    long long Q_inv = modInverse(Q, MOD);
    long long result = P * Q_inv % MOD;

    return result;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> A(n);
        for (int i = 0; i < n; ++i) {
            cin >> A[i];
        }

        cout << expectedValue(n, A) << endl;
    }

    return 0;
}
