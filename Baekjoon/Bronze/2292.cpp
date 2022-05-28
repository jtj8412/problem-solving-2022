#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;

    cin >> n;

    cout << ceilf((sqrt((float)n * 12 - 3) + 3) / 6) ;
}