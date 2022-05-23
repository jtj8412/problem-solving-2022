#include <bits/stdc++.h>
using namespace std;

char s[1000001];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int bBlank = 1, ans = 0;
    
    cin.getline(s, 1000000);

    for (int i = 0; s[i] != '\0'; ++i) {
        if (s[i] == ' ') bBlank = 1;
        else if (bBlank) { bBlank = 0, ans++; }
    }

    cout << ans;
}