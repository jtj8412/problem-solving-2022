#include <bits/stdc++.h>
using namespace std;

const int ANS_TABLE[2][2] = {
	{1, 4}, {2, 3}
};

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int a, b;
	cin >> a >> b;

	cout << ANS_TABLE[a < 0][b < 0];
}