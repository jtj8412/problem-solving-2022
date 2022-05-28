#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int a, b, v;

    cin >> a >> b >> v;

    cout << (int)(ceil((double)(v - b) / (a - b)));
}