#include <iostream>

using namespace std;

int getScore() {
	int result = 0;
	for (int i = 0; i < 3; i++) {
		double x, y;
		cin >> x >> y;

		double dist = x * x + y * y;

		for (int j = 3, score = 100; score; j += 3, score -= 20) {
			if (dist <= j * j) {
				result += score;
				break;
			}
		}
	}

	return result;
}

int main() {
	int T;
	cin >> T;

	while (T--) {
		int scoreP1 = getScore();
		int scoreP2 = getScore();

		cout << "SCORE: " << scoreP1 << " to " << scoreP2 << ", ";

		if (scoreP1 == scoreP2)
			cout << "TIE.\n";
		else
			cout << "PLAYER " << (scoreP1 > scoreP2 ? 1 : 2) << " WINS.\n";
	}
}