#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, m;

    cin >> n;
    m = sqrt(n);

    for (int i = 2; n != 1 && i <= m; ++i) {
        while (n % i == 0) {
            n /= i;
            cout << i << '\n';
        }
    }

    if (n != 1) {
        cout << n;
    }
}