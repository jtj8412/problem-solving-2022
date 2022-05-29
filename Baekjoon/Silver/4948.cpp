#include <bits/stdc++.h>
using namespace std;

#define PRIME_MAX 246913

// is_not_prime : IsPrime(0), NotPrime(1)
int is_not_prime[PRIME_MAX] = { 1, 1, };

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    // init //
    int n, m, ans;

    for (int i = 2; i < PRIME_MAX; ++i) {
        if (is_not_prime[i]) continue;

        for (int j = 2; i * j < PRIME_MAX; ++j) {
            is_not_prime[i * j] = 1;
        }
    }

    // logic //
    cin >> n;
    while (n != 0) {
        ans = 0;
        m = n + n;
        for (int i = n + 1; i <= m; ++i) {
            if (!is_not_prime[i]) {
                ++ans;
            }
        }
        cout << ans << '\n';
        cin >> n;
    }
}