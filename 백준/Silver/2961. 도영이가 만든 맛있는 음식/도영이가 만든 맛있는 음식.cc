#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int N;
	cin >> N;
	vector<pair<int, int>> numList(N);
	for (int i=0; i<N; i++)
		cin >> numList[i].first >> numList[i].second;

	int result = abs(numList[0].first - numList[0].second);

	for (int i=1; i<=N; i++) {
		vector<bool> perList(N);
		for (int j=0; j<i; j++) perList[j] = true;

		do {
			int nowS = 1, nowB = 0;

			for (int j=0; j<N; j++) {
				if (!perList[j]) continue;
				nowS *= numList[j].first;
				nowB += numList[j].second;
			}

			result = min(result, abs(nowS - nowB));
		} while (prev_permutation(perList.begin(), perList.end()));
	}

	cout << result;
}