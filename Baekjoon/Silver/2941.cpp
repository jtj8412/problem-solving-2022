#include <bits/stdc++.h>
using namespace std;



int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int ans = 0;
    string str;
    
    cin >> str;

    for (int i = 0; i < str.size(); ++i) {
        switch (str[i]) {
        case 'c':
            if (str[i + 1] == '=' || str[i + 1] == '-') ++i;
            break;
        case 'd':
            if (str[i + 1] == '-') ++i;
            else if (str[i + 1] == 'z' && i + 2 <= str.size() && str[i + 2] == '=') i += 2;
            break;
        case 'l':
            if (str[i + 1] == 'j') ++i;
            break;
        case 'n':
            if (str[i + 1] == 'j') ++i;
            break;
        case 's':
            if (str[i + 1] == '=') ++i;
            break;
        case 'z':
            if (str[i + 1] == '=') ++i;
            break;
        }
        ans++;
    }

    cout << ans;
}