#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n, a, b;
	cin >> n;

	for (int i = 1; i <= n; ++i) {
		cin >> a >> b;
		printf("Case #%d: %d\n", i, a + b);
	}
}