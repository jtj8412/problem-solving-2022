#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    vector<int> vec;

    cin >> n;

    vec.resize(n);

    for (int i = 0; i < n; ++i) {
        cin >> vec[i];
    }

    sort(vec.begin(), vec.end());

    for (int i = 0; i < vec.size(); ++i) {
        cout << vec[i] << '\n';
    }
}
