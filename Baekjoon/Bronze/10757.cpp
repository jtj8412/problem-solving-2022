#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int bUp = 0, idx;
    char* target;
    string a, b, *pa, *pb;
    cin >> a >> b;

    if (a.size() > b.size()) { pa = &a; pb = &b; }
    else { pa = &b; pb = &a; }

    for (int i = 0; i < pb->size(); ++i) {
        int idx1 = pa->size() - i - 1;
        int idx2 = pb->size() - i - 1;
        target = &pa->at(idx1);

        *target += pb->at(idx2) - '0' + bUp;
        bUp = 0;

        if (*target > '9') {
            bUp = 1;
            *target = '0' + (*target - '9') - 1;
        }
    }

    idx = pa->size() - pb->size() - 1;
    while (bUp && idx >= 0) {
        target = &pa->at(idx);
        if (*target == '9') {
            *target = '0';
        }
        else {
            *target += 1;
            bUp = false;
        }
        idx--;
    }

    if (bUp) cout << 1;
    cout << *pa;
}