#include <iostream>
#include <vector>
#include <queue>
#include <set>

using namespace std;

int main() {
	int A, B, N, M;
	cin >> A >> B >> N >> M;

	set<int> visit;
	queue<pair<int, int>> bucket;
	visit.insert(N);
	bucket.push({N, 0});

	while (bucket.size()) {
		auto now = bucket.front();
		if (now.first == M) break;
		bucket.pop();

		vector<int> nextList = {
			now.first * A, now.first * B,
			now.first + A, now.first - A,
			now.first + B, now.first - B,
			now.first + 1, now.first - 1
		};

		for (int i=0; i<nextList.size(); i++) {
			if (nextList[i] < 0 || nextList[i] > 100000) continue;
			if (visit.find(nextList[i]) != visit.end()) continue;
			visit.insert(nextList[i]);
			bucket.push({nextList[i], now.second + 1});
		}
	}

	cout << bucket.front().second;
}