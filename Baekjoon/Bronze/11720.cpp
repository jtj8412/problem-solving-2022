#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, ans = 0;
    string s;

    cin >> n >> s;

    for (int i = 0; i < s.size(); ++i) {
        ans += s[i] - '0';
    }

    cout << ans;
}