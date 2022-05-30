#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, ans = 1;
    cin >> n;
    for (int i = 2; i <= n; ++i) {
        ans *= i;
    }
    cout << ans;
}