#include <iostream>

using namespace std;

int main() {
	int N, K;
	cin >> N >> K;

	int first;
	pair<int, int> result = {0, 0};
	
	cin >> first;
	for (int i=1, now; i<N; i++) {
		cin >> now;

		if (first != now) {
			result.first += now - first;
			result.second++;
		}
	}

	cout << result.first << " " << result.second;
}