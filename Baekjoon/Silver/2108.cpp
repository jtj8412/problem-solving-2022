#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int arr[8001] = { 0, }, n, sum = 0, many_cnt = 0, many_val = 0, idx, many;
    vector<int> vec;

    cin >> n;

    vec.resize(n);

    for (int i = 0; i < n; ++i) {
        cin >> vec[i];
        idx = vec[i] + 4000;
        if (++arr[idx] > many_cnt) {
            many_cnt = arr[idx];
            many_val = vec[i];
        };
        sum += vec[i];
    }

    for (int i = 0, bFirst = false; i < 8001; ++i) {
        if (arr[i] == many_cnt) {
            many = i - 4000;
            if (bFirst) break;
            bFirst = true;
        }
    }

    sort(vec.begin(), vec.end());

    printf("%d\n%d\n%d\n%d\n", (int)round((double)sum / n), vec[n / 2], many, vec.back() - vec.front());
}