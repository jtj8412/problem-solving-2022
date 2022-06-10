#include <bits/stdc++.h>
using namespace std;

struct compare {
    bool operator()(const string& a, const string& b) const {
        if (a.size() != b.size()) return a.size() < b.size();
        return a < b;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    set<string, compare> s;
    string str;
    int n;

    cin >> n;

    for (int i = 0; i < n; ++i) {
        cin >> str;
        s.insert(str);
    }

    for (auto iter = s.begin(); iter != s.end(); ++iter) {
        cout << *iter << '\n';
    }
}