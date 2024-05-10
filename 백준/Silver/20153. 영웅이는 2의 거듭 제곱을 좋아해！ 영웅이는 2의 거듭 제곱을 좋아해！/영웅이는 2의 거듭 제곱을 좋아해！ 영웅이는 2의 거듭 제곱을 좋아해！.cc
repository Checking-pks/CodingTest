#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int N, result = 0;
	cin >> N;

	vector<bool> binaryList(23);
	vector<int> numList(N + 1);

	for (int i = 1; i <= N; i++) {
		cin >> numList[i];

		for (int j = 0; j < 23; j++)
			if (numList[i] & (1 << j))
				binaryList[j] = !binaryList[j];
	}

	for (int i = 0; i <= N; i++) {
		int now = 0;

		for (int j = 0; j < 23; j++) {
			if (numList[i] & (1 << j)) {
				binaryList[j] = !binaryList[j];

				if (binaryList[j])
					now += (1 << j);

				binaryList[j] = !binaryList[j];
			} else {
				if (binaryList[j])
					now += (1 << j);
			}
		}

		result = max(result, now);
	}

	cout << result << result;
}