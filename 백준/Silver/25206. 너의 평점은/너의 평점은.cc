#include <iostream>

using namespace std;

float score2float(string s) {
	if (s == "A+") return 4.5f;
	if (s == "A0") return 4.0f;
	if (s == "B+") return 3.5f;
	if (s == "B0") return 3.0f;
	if (s == "C+") return 2.5f;
	if (s == "C0") return 2.0f;
	if (s == "D+") return 1.5f;
	if (s == "D0") return 1.0f;
	return 0.0f;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	float totalScore = 0, totalCredit = 0;

	for (int i=0; i<20; i++) {
		string subject, score;
		float credit;

		cin >> subject >> credit >> score;

		if (score == "P") continue;

		totalScore += credit * score2float(score);
		totalCredit += credit;
	}

	cout << totalScore / totalCredit;
}