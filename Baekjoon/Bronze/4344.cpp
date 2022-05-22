#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int c, arr[1000], tmp;
	cin >> c;

	for (int i = 0; i < c; ++i) {
		int n, sum = 0, cnt = 0;
		float avg;
		cin >> n;

		for (int j = 0; j < n; ++j) {
			cin >> tmp;
			arr[j] = tmp;
			sum += tmp;
		}

		avg = (float)sum / n;

		for (int j = 0; j < n; ++j) {
			if (arr[j] > avg) cnt++;
		}

		printf("%.3f%%\n", (float)cnt * 100 / n);
	}
}