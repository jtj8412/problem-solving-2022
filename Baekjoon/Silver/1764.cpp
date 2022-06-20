#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    unordered_map<string, bool> um;
    int n, m;
    string tmp;
    vector<string> ans;

    cin >> n >> m;

    for (int i = 0; i < n; ++i) {
        cin >> tmp;
        um[tmp] = true;
    }

    for (int i = 0; i < m; ++i) {
        cin >> tmp;
        if (um[tmp]) {
            ans.push_back(tmp);
        }
    }

    sort(ans.begin(), ans.end());

    cout << ans.size() << '\n';
    for (int i = 0; i < ans.size(); ++i) {
        cout << ans[i] << '\n';
    }
}