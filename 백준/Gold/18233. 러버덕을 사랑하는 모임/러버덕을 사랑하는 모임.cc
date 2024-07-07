#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int N, P, E;
	cin >> N >> P >> E;

	if (N < P) {
		cout << -1;
		return 0;
	}

	vector<pair<int, int>> nList(N);
	for (int i=0; i<N; i++)
		cin >> nList[i].first >> nList[i].second;

	vector<bool> perList(N);
	for (int i=0; i<P; i++)
		perList[i] = true;

	do {
		int minDoll = 0, maxDoll = 0;
		for (int i=0; i<N; i++) {
			if (!perList[i]) continue;

			minDoll += nList[i].first;
			maxDoll += nList[i].second;
		}

		if (minDoll > E || E > maxDoll)
			continue;

		E -= minDoll;

		for (int i=0, now; i<N; i++) {
			if (!perList[i]) {
				cout << 0 << " ";
				continue;
			}

			now = min(
				E, 
				nList[i].second - 
				nList[i].first
			);
			
			E -= now;
			cout << nList[i].first + now << " ";
		}

		return 0;
	} while (prev_permutation(perList.begin(), perList.end()));

	cout << -1;
}