#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main() 
{
	int n, m;
	cin >> n >> m;

	vector<int> haveParent(n+1);
	vector<vector<int>> numList(n+1);

	for (int i=0, a, b; i<m; i++) {
		cin >> a >> b;
		haveParent[b]++;
		numList[a].push_back(b);
	}

	queue<int> bucket;
	for (int i=1; i<haveParent.size(); i++) 
		if (haveParent[i] <= 0)
			bucket.push(i);

	while (bucket.size()) {
		int now = bucket.front();
		bucket.pop();

		if (!haveParent[now])
			cout << now << " ";

		for (int i=0; i<numList[now].size(); i++) {
			haveParent[numList[now][i]]--;
			if (haveParent[numList[now][i]] > 0) continue;
			bucket.push(numList[now][i]);
		}
	}
}