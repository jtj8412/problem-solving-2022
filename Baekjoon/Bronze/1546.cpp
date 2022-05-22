#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n, max = INT_MIN, arr[1000] = {};
	float sum = 0;

	cin >> n;

	for (int i = 0; i < n; ++i) {
		cin >> arr[i];
		if (arr[i] > max) max = arr[i];
	}

	for (int i = 0; i < n; ++i) {
		sum += (float)arr[i] / max * 100;
	}


	printf("%.2f", sum / n);
}