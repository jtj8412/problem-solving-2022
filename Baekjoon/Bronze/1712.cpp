#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int a, b, c, ans;

    cin >> a >> b >> c;

    if (b >= c) {
        cout << -1;
        return 0;
    }

    ans = a / (c - b) + 1;

    cout << ans;
}