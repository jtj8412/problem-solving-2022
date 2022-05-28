#include <bits/stdc++.h>
using namespace std;

int arr[15][14] = {};

void init() {
    for (int i = 0; i < 14; ++i) {
        arr[0][i] = i + 1;
    }

    for (int i = 1; i < 15; ++i) {
        arr[i][0] = 1;
        for (int j = 1; j < 14; ++j) {
            arr[i][j] = arr[i][j - 1] + arr[i - 1][j];
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int tc, k, n;

    init();

    cin >> tc;

    for (int i = 0; i < tc; ++i) {
        cin >> k >> n;
        cout << arr[k][n - 1] << '\n';
    }
}