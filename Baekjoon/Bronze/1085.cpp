#include <bits/stdc++.h>
using namespace std;

int logic() {
    int x, y, w, h;
    int arr[4] = {};

    cin >> x >> y >> w >> h;
    
    arr[0] = y;
    arr[1] = h - y;
    arr[2] = x;
    arr[3] = w - x;

    return *min_element(arr, arr + 4);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    cout << logic();
}