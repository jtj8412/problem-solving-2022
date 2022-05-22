#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n;
	string s;

	cin >> n;

	for (int i = 0; i < n; ++i) {
		int score = 0, stk = 0;
		cin >> s;
		for (int j = 0; j < s.length(); ++j) {
			if (s[j] == 'O') {
				score += stk + 1;
				stk++;
			}
			else {
				stk = 0;
			}
		}
		cout << score << "\n";
	}
}