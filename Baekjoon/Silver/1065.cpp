#include <bits/stdc++.h>
using namespace std;

int isHan(int n) {
	int a = (n % 10), b = (n / 10 % 10), c = (n / 100);
	return (b - a) == (c - b);
}

int logic() {
	int n, ans = 99;
	cin >> n;

	if (n < 100) return n;

	for (int i = 111; i <= n; ++i) {
		if (isHan(i)) ans++;
	}

	return ans;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	cout << logic();
}