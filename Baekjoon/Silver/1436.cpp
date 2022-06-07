#include <bits/stdc++.h>
using namespace std;

int order = 0, n;
string ans;

bool logic(int idx, int six_cnt, bool bComplete) {
    if (!bComplete && ans.size() - idx + six_cnt < 3) return false;

    if (idx == ans.size()) return ++order == n;

    int start = (idx == 0) ? 1 : 0;
    for (int i = start; i < 10; ++i) {
        int _six_cnt = (i == 6) ? six_cnt + 1 : 0;
        bool _bComplete = (_six_cnt >= 3) ? true : bComplete;
        ans[idx] = i + '0';
        if (logic(idx + 1, _six_cnt, _bComplete)) return true;
    }

    return false;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin >> n;

    for (int i = 3; i < 100; ++i) {
        ans.resize(i);
        if (logic(0, 0, false)) break;
    }

    cout << ans;
}