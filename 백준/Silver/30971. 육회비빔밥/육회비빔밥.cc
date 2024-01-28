#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int N, K, result=-1;
	cin >> N >> K;

	vector<int[3]> foodList(N);
	for (int j=0; j<3; j++)
		for (int i=0; i<N; i++)
			cin >> foodList[i][j];

	vector<int> perList(N);
	for (int i=0; i<N; i++)
		perList[i] = i;

	do {
		int now = 0;
		for (int i=1, before, after; i<N; i++) {
			before = perList[i-1], after = perList[i];
			if (foodList[before][2] * foodList[after][2] > K) {
				now = -1;
				break;
			}

			now += foodList[before][0] * foodList[after][1];
		}

		result = max(result, now);
	} while (next_permutation(perList.begin(), perList.end()));

	cout << result;
}