#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

const int MAX = 100'000'000;

int main() {
	int N, M;
	cin >> N >> M;

	vector<vector<int>> field(N+1, vector<int>(N+1, MAX));
	for (int i=0, u, v, c; i<M; i++) {
		cin >> u >> v >> c;
		field[u][v] = c;
	}

	int result = MAX;
	vector<int> nList(N), resultList;
	for (int i=1; i<=N; i++)
		nList[i-1] = i;

	do {
		bool isRoute = field[nList.back()][nList[0]] != MAX;
		int now = field[nList.back()][nList[0]];
		
		for (int i=1; isRoute && i<N; i++) {
			now = max(now, field[nList[i-1]][nList[i]]);
			if (field[nList.back()][nList[0]] == MAX)
				isRoute = false;
		}

		if (!isRoute) continue;

		if (result > now) {
			result = now;
			resultList = nList;
		}
	} while (next_permutation(nList.begin(), nList.end()));

	if (result == MAX) {
		cout << -1;
	} else {
		cout << result << "\n";
		for (int i=0; i<N; i++)
			cout << resultList[i] << " ";
	}
}