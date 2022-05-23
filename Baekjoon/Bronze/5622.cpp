#include <bits/stdc++.h>
using namespace std;

int table[26] = { 3, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6, 6, 7, 7, 7, 8, 8, 8, 8, 9, 9, 9, 10, 10, 10, 10 };

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int ans = 0;
    string s;

    cin >> s;

    for (int i = 0; i < s.size(); ++i) {
        ans += table[s[i] - 'A'];
    }

    cout << ans;
}