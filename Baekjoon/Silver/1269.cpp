#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    set<int> set;
    int n, m, tmp, ans;

    cin >> n >> m;

    ans = n + m;

    for (int i = 0; i < n; ++i) {
        cin >> tmp;
        set.insert(tmp);
    }

    for (int i = 0; i < m; ++i) {
        cin >> tmp;
        if (set.find(tmp) != set.end()) {
            ans -= 2;
        }
    }

    cout << ans;
}