#include <bits/stdc++.h>
using namespace std;

const char GRADE_CH[5] = { 'A', 'B', 'C', 'D', 'F' };
const int SCORE_MIN[5] = { 90, 80, 70, 60, 0 };

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int score, ans_idx = 0;
	cin >> score;

	for (int i = 0; i < 5; ++i) {
		if (score >= SCORE_MIN[i]) {
			ans_idx = i;
			break;
		}
	}

	cout << GRADE_CH[ans_idx];
}