#include <bits/stdc++.h>
using namespace std;

#define PRIME_MAX 10001

// is_not_prime : IsPrime(0), NotPrime(1)
int is_not_prime[PRIME_MAX] = { 1, 1, };

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    // init //
    int tc, n, m;

    for (int i = 2; i < PRIME_MAX; ++i) {
        if (is_not_prime[i]) continue;

        for (int j = 2; i * j < PRIME_MAX; ++j) {
            is_not_prime[i * j] = 1;
        }
    }

    // logic //
    cin >> tc;
    for (int i = 0; i < tc; ++i) {
        cin >> n;
        m = n / 2;
        for (int j = 0; j < m; ++j) {
            if (!is_not_prime[m - j] && !is_not_prime[m + j]) {
                cout << m - j << ' ' << m + j << '\n';
                break;
            }
        }
    }
}