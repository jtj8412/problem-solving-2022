#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int w, h, n, x, y, tc;
    cin >> tc;

    for (int i = 0; i < tc; ++i) {
        cin >> h >> w >> n;

        x = (n / h) + 1;
        y = n % h;

        if (y == 0) {
            y = h;
            x--;
        }

        cout << y;
        if (x < 10) cout << '0';
        cout << x << '\n';
    }
}