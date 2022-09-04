#include <iostream>
#include <unordered_map>
#include <vector>
#include <list>

using namespace std;

int main() {
	unordered_map<int, int> bridge;
	vector<bool> alreadyVisit(106, false);
	list<pair<int, int>> bucket;
	
	int n, m;
	cin >> n >> m;

	for (int i=0; i<n+m; i++) {
		pair<int, int> nowBridge;
		cin >> nowBridge.first >> nowBridge.second;

		bridge[nowBridge.first] = nowBridge.second;
	}

	bucket.push_back({1, 0});

	while (true) {
		pair<int, int> nowPos = bucket.front();

		if (bridge[nowPos.first])
			nowPos.first = bridge[nowPos.first];
		
		if (nowPos.first >= 100)
			break;
		
		bucket.pop_front();
		
		if (alreadyVisit[nowPos.first])
			continue;

		alreadyVisit[nowPos.first] = true;

		for (int i=1; i<=6; i++)
			bucket.push_back({nowPos.first + i, nowPos.second + 1});
	}

	cout << bucket.front().second;
}