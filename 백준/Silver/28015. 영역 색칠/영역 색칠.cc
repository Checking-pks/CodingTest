#include <iostream>

using namespace std;

int main() {
	int N, M, result = 0;
	cin >> N >> M;

	for (int i=0, last; i<N; i++) {
		int countOne = 0, countTwo = 0;
		cin >> last;

		if (last == 1) countOne++;
		if (last == 2) countTwo++;
		
		for (int j=1, now; j<M; j++) {
			cin >> now;

			if (now == 0 && (countOne || countTwo)) {
				result += min(countOne, countTwo)+1;
				countOne = 0;
				countTwo = 0;
			}
			if (now == 1 && now != last) countOne++;
			if (now == 2 && now != last) countTwo++;

			last = now;
		}

		if (countOne || countTwo)
			result += min(countOne, countTwo)+1;
	}

	cout << result;
}