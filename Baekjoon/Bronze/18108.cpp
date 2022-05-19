#include <bits/stdc++.h>
using namespace std;

const int YEAR_OFFSET = (2541 - 1998);

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int y;
	cin >> y;
	cout << y + YEAR_OFFSET;
}