#include <bits/stdc++.h>
using namespace std;

char str[20001] = {};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t, r;
    string s;

    cin >> t;
    
    for (int i = 0; i < t; ++i) {
        cin >> r >> s;
        for (int j = 0; j < s.size(); ++j) {
            memset(str + (j * r), s[j], r);
        }
        str[s.size() * r] = '\0';
        cout << str << "\n";
    }
}