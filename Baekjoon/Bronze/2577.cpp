#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int arr[10] = { 0, }, a, b, c, num;

	cin >> a >> b >> c;

	num = a * b * c;

	while (num != 0) {
		arr[num % 10]++;
		num *= 0.1;
	}

	for (int i = 0; i < 10; ++i) {
		cout << arr[i] << "\n";
	}
}