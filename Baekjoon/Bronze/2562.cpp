#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int max = INT_MIN, max_idx = -1, tmp;


	for (int i = 0; i < 9; ++i) {
		cin >> tmp;
		if (tmp > max) {
			max = tmp;
			max_idx = i;
		}
	}

	cout << max << "\n" << max_idx + 1;
}