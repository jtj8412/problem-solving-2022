#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int h, m;
	cin >> h >> m;

	m -= 45;
	if (m < 0) {
		m = 60 + m;
		h--;
		if (h < 0) {
			h = 23;
		}
	}
	cout << h << ' ' << m;
}