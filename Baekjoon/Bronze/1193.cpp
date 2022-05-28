#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int x, x_start, x_diff, n;

    cin >> x;

    n = floorf(sqrtf(x * 8 - 7) - 1) / 2;

    x_start = n * (n + 1) / 2 + 1;
    x_diff = x - x_start;

    if (n % 2 == 0) cout << (n + 1) - x_diff << '/' << 1 + x_diff;
    else cout << 1 + x_diff << '/' << (n + 1) - x_diff;
}