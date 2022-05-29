#include <bits/stdc++.h>
using namespace std;

#define PRIME_MAX 1001

// is_not_prime : IsPrime(0), NotPrime(1)
int is_not_prime[PRIME_MAX] = { 1, 1, };

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    // init
    for (int i = 2; i < PRIME_MAX; ++i) {
        if (is_not_prime[i]) continue;

        for (int j = 2; i * j < PRIME_MAX; ++j) {
            is_not_prime[i * j] = 1;
        }
    }

    // input
    int n, ans = 0 ,tmp;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        cin >> tmp;
        if (!is_not_prime[tmp]) ++ans;
    }

    cout << ans;
}