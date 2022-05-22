#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n, cur = -1, ans = 0;

	cin >> n;
	cur = n;

	do {
		cur = (cur % 10) * 10 + ((cur / 10) + (cur % 10)) % 10;
		ans++;
	} while (n != cur);

	cout << ans;
}