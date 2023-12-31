#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main() {
	int N, M;
	cin >> N >> M;

	vector<vector<int>> childList(N+1);
	vector<int> parentCount(N+1);
	queue<int> bucket;

	for (int i=0, num, parent, child; i<M; i++) {
		cin >> num >> parent;
		for (int j=1; j<num; j++) {
			cin >> child;
			childList[parent].push_back(child);
			parentCount[child]++;
			parent = child;
		}
	}

	for (int i=1; i<=N; i++) 
		if (!parentCount[i])
			bucket.push(i);

	vector<int> result;

	while (bucket.size()) {
		int parent = bucket.front();
		result.push_back(parent);
		bucket.pop();

		for (int i=0; i<childList[parent].size(); i++) {
			int child = childList[parent][i];
			parentCount[child]--;
			if (!parentCount[child]) bucket.push(child);
		}
	}

	if (result.size() != N)
		cout << 0;
	else
		for (int n:result)
			cout << n << "\n";
}