#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    vector<pair<int, int>> vec;
    int n, x, y;

    cin >> n;

    for (int i = 0; i < n; ++i) {
        cin >> x >> y;
        vec.push_back(make_pair(x, y));
    }

    sort(vec.begin(), vec.end(), [](auto a, auto b){
        if (a.second != b.second) return a.second < b.second;
        return a.first < b.first;
    });

    for (int i = 0; i < vec.size(); ++i) {
        cout << vec[i].first << ' ' << vec[i].second << '\n';
    }
}