#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    string s;
    unordered_set<string> us;

    cin >> s;

    for (int i = 1; i <= s.size(); ++i) {
        for (int j = 0; j + i <= s.size(); ++j) {
            us.insert(s.substr(j, i));
        }
    }

    cout << us.size();
}