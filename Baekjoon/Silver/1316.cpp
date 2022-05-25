#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int tc, arr[26], idx, ans = 0;
    string s;

    cin >> tc;

    for (int i = 0, j; i < tc; ++i) {
        cin >> s;
        memset(arr, -1, 26 * sizeof(int));

        for (j = 0; j < s.size(); ++j) {
            idx = s[j] - 'a';
            if (arr[idx] != -1 && arr[idx] != j - 1) break;
            arr[idx] = j;
        }

        if (j == s.size()) {
            ans++;
        }
    }

    cout << ans;
}