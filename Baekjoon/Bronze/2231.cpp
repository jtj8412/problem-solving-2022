#include <bits/stdc++.h>
using namespace std;

int get_sum_each_pos(int n) {
    int ret = n;
    while (n != 0) {
        ret += n % 10;
        n /= 10;
    }
    return ret;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, start, ans = 0;

    cin >> n;

    start = min(0, n - 55);

    for (int i = start; i < n; ++i) {
        if (get_sum_each_pos(i) == n) {
            ans = i;
            break;
        }
    }

    cout << ans;
}