#include <bits/stdc++.h>

using namespace std;

int n, m, ans = 0;
vector<int> vec;

void recursive(int idx, int cnt, int sum) {
    if (cnt == 3) {
        if (sum <= m) ans = max(ans, sum);
        return;
    }

    for (int i = idx + 1; i < n - (2 - cnt); ++i) {
        recursive(i, cnt + 1, sum + vec[i]);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin >> n >> m;

    vec.resize(n);

    for (int i = 0; i < n; ++i) {
        cin >> vec[i];
    }

    recursive(-1, 0, 0);

    cout << ans;
}