#include <bits/stdc++.h>
using namespace std;

int logic(int n) {
	if (n % 2 == 0) return (n + 1) * (n / 2);
	return (n + 1) * (n / 2) + (n / 2 + 1);
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n;
	cin >> n;

	cout << logic(n);
}