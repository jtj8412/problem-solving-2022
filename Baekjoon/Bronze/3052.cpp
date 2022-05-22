#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int arr[42] = { 0, }, tmp, idx, ans = 0;

	for (int i = 0; i < 10; ++i) {
		cin >> tmp;
		idx = tmp % 42;
		if (!arr[idx]) {
			ans++;
			arr[idx] = 1;
		}
	}

	cout << ans;
}