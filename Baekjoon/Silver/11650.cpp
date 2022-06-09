#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    string s, ans;
    int arr[10] = { 0, };

    cin >> s;

    for (int i = 0; i < s.size(); ++i) {
        arr[s[i] - '0']++;
    }

    for (int i = 9; i >= 0; --i) {
        for (int j = 0; j < arr[i]; ++j) {
            ans += (i + '0');
        }
    }

    cout << ans;
}