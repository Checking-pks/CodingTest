#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int N, M;
	cin >> N;
	vector<int> idxList(N);
	for (int i=0, now; i<N; i++) {
		cin >> now;
		idxList[now-1] = i;
	}

	cin >> M;
	for (int i=0, L, R; i<M; i++) {
		cin >> L >> R;
		L--;

		vector<int> query(N), nowIdxList = idxList;
		
		sort(nowIdxList.begin() + L, nowIdxList.begin() + R);
		
		for (int i=0; i<N; i++) query[nowIdxList[i]] = i+1;
		for (int i=0; i<N; i++) cout << query[i] << " ";
		cout << "\n";
	}
}