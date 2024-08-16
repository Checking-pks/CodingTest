#include <iostream>
#include <vector>

using namespace std;

int main() {
	int N, T, maxFine = 0;
	cin >> N >> T;

	vector<pair<int, int>> problems(N);
	for (int i = 0; i < N; i++) {
		cin >> problems[i].first >> problems[i].second;
		maxFine += problems[i].second;
	}

	vector<int> fineList(T + 1, maxFine);
	for (int i = 0, days, fine; i < N; i++) {
		days = problems[i].first;
		fine = problems[i].second;

		for (int j = T; j >= 0; j--) {
			if (j - days < 0)
				break;

			fineList[j] = min(fineList[j], fineList[j - days] - fine);
		}
	}

	cout << fineList[T];
}