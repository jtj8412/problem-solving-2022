#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    map<int, int> map;
    int n, m, tmp;

    cin >> n;

    for (int i = 0; i < n; ++i) {
        cin >> tmp;
        map[tmp]++;
    }

    cin >> m;

    for (int i = 0; i < m; ++i) {
        cin >> tmp;
        cout << map[tmp] << ' ';
    }
}