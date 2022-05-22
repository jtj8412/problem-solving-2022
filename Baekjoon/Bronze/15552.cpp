#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n, a, b;
	cin >> n;

	for (int i = n; i >= 1; --i) {
		cin >> a >> b;
		cout << a + b << "\n";
	}
}