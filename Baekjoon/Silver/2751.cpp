#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    set<int> s;
    int n, tmp;

    cin >> n;

    for (int i = 0; i < n; ++i) {
        cin >> tmp;
        s.insert(tmp);
    }

    for (auto iter = s.begin(); iter != s.end(); ++iter) {
        cout << *iter << '\n';
    }
}