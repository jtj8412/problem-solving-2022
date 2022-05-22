#include <bits/stdc++.h>
using namespace std;

int arr[20001] = { 0, };

int self_number(int n) {
	int ret = n;
	while (n != 0) {
		ret += n % 10;
		n /= 10;
	}
	return ret;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	for (int i = 1; i < 10001; ++i) {
		if (!arr[i]) cout << i << "\n";
		int idx = self_number(i);
		if (idx < 10001) arr[idx] = 1;
	}
}