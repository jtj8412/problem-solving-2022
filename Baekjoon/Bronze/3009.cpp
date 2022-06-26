#include <bits/stdc++.h>
using namespace std;

int get_alone_num(int* arr) {
    if (arr[0] == arr[1]) return arr[2];
    if (arr[0] == arr[2]) return arr[1];
    return arr[0];
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int x[3], y[3];

    for (int i = 0; i < 3; ++i) {
        cin >> x[i] >> y[i];
    }

    cout << get_alone_num(x) << ' ' << get_alone_num(y);
}