#include <iostream>
#include <vector>

using namespace std;

int main() {
	int testcase;
	cin >> testcase;

	while (testcase--) {
		int subject, credit = 0;
		float score = 0;
		cin >> subject;

		for (int i=0; i<subject; i++) {
			int nowCredit;
			float nowScore;
			cin >> nowCredit >> nowScore;

			credit += nowCredit;
			score += nowCredit * nowScore;
		}

		cout << credit << " " << score / credit << "\n";
	}
}