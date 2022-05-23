#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int arr[26];
	string s;
	
	memset(arr, -1, sizeof(int) * 26);
	cin >> s;

	for (int i = 0; i < s.size(); ++i) {
		int idx = s[i] - 'a';
		if (arr[idx] == -1) arr[idx] = i;
	}

	for (int i = 0; i < 26; ++i) {
		cout << arr[i] << " ";
	}
}