#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(vector<int> a, vector<int> b) {
	return a[0] + a[1] > b[0] + b[1];
}

int main() {
	int N;
	cin >> N;

	vector<int> mineList(N);
	for (int i=0; i<N; i++)
		cin >> mineList[i];

	vector<int> upStack(N), downStack(N);
	for (int i=1, j=N-2; i<N; i++, j--) {
		if (mineList[i] > mineList[i-1])
			upStack[i] = upStack[i-1] + 1;
		if (mineList[j] > mineList[j+1])
			downStack[j] = downStack[j+1] + 1;
	}

	vector<vector<int>> bucket;
	for (int i=0; i<N; i++) {
		bucket.push_back({upStack[i], downStack[i], i});
	}

	sort(bucket.begin(), bucket.end(), cmp);

	vector<bool> visit(N);
	vector<int> result;
	for (int i=0; i<N; i++) {
		int now = bucket[i][2];
		int left = bucket[i][0], right = bucket[i][1];
		
		if (visit[now]) continue;
		result.push_back(now+1);

		for (int j=now-left; j<=now+right; j++)
			visit[j] = true;
	}

	sort(result.begin(), result.end());

	for (int i:result)
		cout << i << "\n";
}
