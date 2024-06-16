#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int N, M;
	cin >> N >> M;

	int singleCount = 0, maxCount = 0;
	vector<int> correctList(M);
	for (int i=0; i<M; i++)
		cin >> correctList[i];

	vector<vector<int>> nList(N, vector<int>(M));
	for (int i=0; i<N; i++) {
		int nowCount = 0;

		for (int j=0; j<M; j++) {
			cin >> nList[i][j];
			nowCount += (correctList[j] == nList[i][j]);
		}

		singleCount = max(singleCount, nowCount);
	}

	for (int i=3; i<=N; i+=2) {
		vector<bool> perList(N);
		for (int j=0; j<i; j++)
			perList[j] = true;

		do {
			int nowCount = 0;
			for (int j=0; j<M; j++) {
				int now = 0;
				for (int k=0; k<N; k++) {
					if (!perList[k])
						continue;
					now += (correctList[j] == nList[k][j] ? 1 : -1);
				}

				if (now > 0)
					nowCount++;
			}
			maxCount = max(maxCount, nowCount);
		} while (prev_permutation(perList.begin(), perList.end()));
	}

	cout << (maxCount > singleCount);
}