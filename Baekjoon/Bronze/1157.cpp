#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int arr[26] = { 0, }, max_idx = 0, stk = 1;
    string s;

    cin >> s;

    for (int i = 0; i < s.size(); ++i) {
        if (s[i] >= 'a') arr[s[i] - 'a']++;
        else arr[s[i] - 'A']++;
    }

    for (int i = 1; i < 26; ++i) {
        if (arr[i] > arr[max_idx]) {
            max_idx = i;
            stk = 1;
        } 
        else if (arr[i] == arr[max_idx]) {
            stk++;
        }
    }

    if (stk > 1) cout << '?';
    else cout << (char)('A' + max_idx);
}