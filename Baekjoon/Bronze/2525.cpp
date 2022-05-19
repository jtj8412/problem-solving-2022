#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int a, b, c, min;
	cin >> a >> b >> c;

	min = (a * 60 + b + c) % 1440;

	cout << min / 60 << ' ' << min % 60;
}