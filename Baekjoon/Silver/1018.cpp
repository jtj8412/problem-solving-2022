#include <bits/stdc++.h>
using namespace std;

vector<string> vec;
int ans = INT_MAX;

bool is_paint(int i, int j, char first, char ch) {
    if (i & 1) {
        if (j & 1) return ch != first;
        return ch == first;
    } else {
        if (j & 1) return ch == first;
        return ch != first;
    }
}

int get_paint_count(int x, int y, char first) {
    int ret = 0;
    for (int i = 0; i < 8; ++i) {
        for (int j = 0; j < 8; ++j) {
            if (is_paint(i, j, first, vec[i + y][j + x])) ++ret;
        }
    }
    return ret;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, m;
    cin >> n >> m;

    vec.resize(n);
    for (int i = 0; i < n; ++i) {
        cin >> vec[i];
    }

    for (int i = 0; i <= n - 8; ++i) {
        for (int j = 0; j <= m - 8; ++j) {
            ans = min(ans, get_paint_count(j, i, 'W'));
            ans = min(ans, get_paint_count(j, i, 'B'));
        }
    }

    cout << ans;
}