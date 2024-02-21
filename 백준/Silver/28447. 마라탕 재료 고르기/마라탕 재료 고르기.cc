#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int N, K, result=-45000;
	cin >> N >> K;

	vector<vector<int>> nList(N, vector<int>(N));

	for (int i=0; i<N; i++) 
		for (int j=0; j<N; j++) 
			cin >> nList[i][j];

	vector<bool> perList(N);
	for (int i=0; i<K; i++)
		perList[i] = true;

	do {
		int now = 0;

		for (int i=0; i<N; i++) {
			if (!perList[i]) continue;
			
			for (int j=i+1; j<N; j++) {
				if (!perList[j]) continue;

				now += nList[i][j];
			}
		}

		result = max(result, now);
	} while (prev_permutation(perList.begin(), perList.end()));

	cout << result;
}