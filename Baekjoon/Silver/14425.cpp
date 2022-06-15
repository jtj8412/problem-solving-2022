#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    unordered_set<string> us;
    int n, m, ans = 0;
    string s;

    cin >> n >> m;

    for (int i = 0; i < n; ++i) {
        cin >> s;
        us.insert(s);
    }

    for (int i = 0; i < m; ++i) {
        cin >> s;
        if (us.find(s) != us.end()) ++ans;
    }

    cout << ans;
}