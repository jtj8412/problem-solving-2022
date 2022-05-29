#include <bits/stdc++.h>
using namespace std;

#define PRIME_MAX 1000001

// is_not_prime : IsPrime(0), NotPrime(1)
int is_not_prime[PRIME_MAX] = { 1, 1, };

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    // input //
    int n, m;
    cin >> n >> m;

    // init //
    for (int i = 2; i <= m; ++i) {
        if (is_not_prime[i]) continue;

        for (int j = 2; i * j <= m; ++j) {
            is_not_prime[i * j] = 1;
        }
    }

    // logic //
    for (int i = n; i <= m; ++i) {
        if (!is_not_prime[i]) {
            cout << i << '\n';
        }
    }
}