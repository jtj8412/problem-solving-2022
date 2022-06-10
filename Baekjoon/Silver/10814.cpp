#include <bits/stdc++.h>
using namespace std;

struct data_ {
    int age, idx;
    string name;
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    vector<data_> vec;

    cin >> n;

    vec.resize(n);

    for (int i = 0; i < n; ++i) {
        cin >> vec[i].age >> vec[i].name;
        vec[i].idx = i;
    }

    sort(vec.begin(), vec.end(), [](const data_& a, const data_& b) {
        if (a.age != b.age) return a.age < b.age;
        return a.idx < b.idx;
    });

    for (int i = 0; i < n; ++i) {
        cout << vec[i].age << ' ' << vec[i].name << '\n';
    }
}