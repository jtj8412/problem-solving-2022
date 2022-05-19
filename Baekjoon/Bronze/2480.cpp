#include <bits/stdc++.h>
using namespace std;

#define FIRST(n) (10000 + n * 1000)
#define SECOND(n) (1000 + n * 100)
#define THIRD(n) (n * 100)

int logic() {
	int a, b, c, min;
	cin >> a >> b >> c;

	if (a == b) {
		if (b == c) return FIRST(a);
		return SECOND(a);
	}
	if (b == c) return SECOND(b);
	if (a == c) return SECOND(c);

	if (a > b && a > c) return THIRD(a);
	if (b > c) return THIRD(b);
	return THIRD(c);
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	cout << logic();
}