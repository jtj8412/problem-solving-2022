#include <bits/stdc++.h>
using namespace std;

unordered_map<string, int> um;
vector<string> vec;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, m;
    string tmp;

    cin >> n >> m;

    vec.resize(n);

    for (int i = 0; i < n; ++i) {
        cin >> tmp;
        um[tmp] = i;
        vec[i] = tmp;
    }

    for (int i = 0; i < m; ++i) {
        cin >> tmp;
        if (isdigit(tmp[0])) {
            cout << vec[stoi(tmp) - 1] << '\n';
        } else {
            cout << um[tmp] + 1 << '\n';
        }
    }
}