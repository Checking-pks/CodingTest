#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int N, M;
	cin >> N >> M;

	vector<vector<int>> timeList(N+1, vector<int>(N+1));

	for (int i=0, a, b, t; i<M; i++) {
		cin >> a >> b >> t;
		timeList[a][b] = max(timeList[a][b], t);
	}

	int result = -1;
	vector<int> nList;
	for (int i=1; i<=N; i++)
		nList.push_back(i);

	do {
		int nowTime = 
			timeList[0][nList.front()] +
			timeList[nList.back()][0];
		
		if (!timeList[0][nList.front()])
			continue;
		if (!timeList[nList.back()][0])
			continue;

		for (int i=1; i<N; i++) {
			if (!timeList[nList[i-1]][nList[i]]) {
				nowTime = -1;
				break;
			}

			nowTime += timeList[nList[i-1]][nList[i]];
		}

		result = max(result, nowTime);
	} while (next_permutation(nList.begin(), nList.end()));

	cout << result;
}