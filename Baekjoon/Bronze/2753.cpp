#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int year, ans = 0;
	cin >> year;

	if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) {
		ans = 1;
	}

	cout << ans;
}