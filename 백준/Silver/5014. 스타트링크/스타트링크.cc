#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main() {
	int f, s, g, u, d;
	cin >> f >> s >> g >> u >> d;

	vector<bool> alreadyVisit(f+1, false);
	queue<pair<int, int>> bucket;
	bucket.push({s, 0});

	while (bucket.size()) {
		auto now = bucket.front();
		if (now.first == g) break;
		bucket.pop();
		if (now.first <= 0) continue;
		if (now.first > f) continue;
		if (alreadyVisit[now.first]) continue;
		alreadyVisit[now.first] = true;

		bucket.push({now.first+u, now.second+1});
		bucket.push({now.first-d, now.second+1});
	}

	if (bucket.size()) cout << bucket.front().second;
	else cout << "use the stairs";
}