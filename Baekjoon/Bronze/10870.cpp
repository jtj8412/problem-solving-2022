#include <bits/stdc++.h>
using namespace std;

int fibo(int n, int a, int b) {
    if (n == 0) return a;
    return fibo(n - 1, a + b, a);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n = 0;
    cin >> n;
    if (n == 0) {
        cout << 0;
        return 0;
    }
    cout << fibo(n - 1, 1, 0);
}