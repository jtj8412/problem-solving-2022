#include <bits/stdc++.h>
using namespace std;

int get_reverse(int n) {
    return (n % 10) * 100 + ((n / 10) % 10) * 10 + (n / 100);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int a, b;

    cin >> a >> b;

    a = get_reverse(a);
    b = get_reverse(b);

    cout << max(a, b);
}