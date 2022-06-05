#include <bits/stdc++.h>
using namespace std;

vector<pair<int,int>> vec;

int get_rank(int idx) {
    int ret = 1, x = vec[idx].first, y = vec[idx].second;
    for (int i = 0; i < vec.size(); ++i) {
        if (i == idx) continue;
        if (vec[i].first > x && vec[i].second > y) ++ret;
    }
    return ret;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, x, y;
    cin >> n;

    vec.resize(n);

    for (int i = 0; i < n; ++i) {
        cin >> x >> y;
        vec[i].first = x; 
        vec[i].second = y;
    }

    for (int i = 0; i < n; ++i) {
        cout << get_rank(i) << ' ';
    }
}