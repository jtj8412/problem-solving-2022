#include <bits/stdc++.h>
using namespace std;

int logic(int n) {
    int ans = 0, rem = 0;

    rem = n % 5;
    ans = n / 5;

    switch (rem) {
    case 1:
        if (ans < 2) return -1;
        ans += 1;
        break;
    case 2:
        if (ans < 3) return -1;
        ans += 2;
        break;
    case 3:
        ans += 1;
        break;
    case 4:
        if (ans < 2) return -1;
        ans += 2;
        break;
    }

    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    int ans = logic(n);
    if (ans == -1 && n % 3 == 0) {
        cout << n / 3;
        return 0;
    }
    cout << ans;
}