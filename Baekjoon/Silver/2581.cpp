#include <bits/stdc++.h>
using namespace std;

#define PRIME_MAX 10001

// is_not_prime : IsPrime(0), NotPrime(1)
int is_not_prime[PRIME_MAX] = { 1, 1, };

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    // input //
    int n, m, i, ans1 = 0, ans2 = -1;
    cin >> n >> m;

    // init //
    for (int i = 2; i <= m; ++i) {
        if (is_not_prime[i]) continue;

        for (int j = 2; i * j <= m; ++j) {
            is_not_prime[i * j] = 1;
        }
    }

    // logic //
    
    // 1.min
    for (i = n; i <= m; ++i) {
        if (!is_not_prime[i]) {
            ans1 = ans2 = i;
            break;
        }
    }

    // 2.exception
    if (ans2 == -1) {
        cout << -1;
        return 0;
    }

    // 3.sum
    for (i = i + 1; i <= m; ++i) {
        if (!is_not_prime[i]) {
            ans1 += i;
        }
    }

    // result
    cout << ans1 << '\n' << ans2;
}