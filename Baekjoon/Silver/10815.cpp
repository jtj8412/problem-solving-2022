#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    set<int> s;

    int n, m, tmp;

    cin >> n;

    for(int i = 0; i < n; ++i) {
        cin >> tmp;
        s.insert(tmp);
    }

    cin >> m;

    for (int i = 0; i < m; ++i) {
        cin >> tmp;
        if (s.find(tmp) == s.end()) {
            cout << 0 << ' ';
        } else {
            cout << 1 << ' ';
        }
    }
}