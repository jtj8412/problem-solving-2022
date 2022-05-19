#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int a, b, sum = 0;
	cin >> a >> b;

	for (int i = 1; i <= 100; i *= 10) {
		int tmp = a * ((b / i) % 10);
		sum += tmp * i;
		cout << tmp << endl;
	}
	cout << sum << endl;
}