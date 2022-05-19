#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	string ans;
	int a, b;

	cin >> a >> b;

	if (a > b) ans = ">";
	else if (a < b) ans = "<";
	else ans = "==";

	cout << ans;
}