#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n, min = INT_MAX, max = INT_MIN, tmp;
		
	cin >> n;

	for (int i = 0; i < n; ++i) {
		cin >> tmp;
		if (tmp < min) min = tmp;
		if (tmp > max) max = tmp;
	}

	cout << min << " " << max;
}