#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main() {
	int n, k;
	cin >> n >> k;

	if (n >= k) {
		cout << n - k;
		return 0;
	}

	vector<bool> alreadyVisit(100001, false);
	queue<pair<int, int>> bucket;
	
	bucket.push({n, 0});

	while (bucket.size()) {
		auto now = bucket.front();
		bucket.pop();

		if (now.first < 0 || now.first > 100000) continue;
		if (alreadyVisit[now.first]) continue;
		alreadyVisit[now.first] = true;
		
		if (now.first == k) {
			cout << now.second;
			break;
		}

		bucket.push({now.first *2, now.second});
		bucket.push({now.first -1, now.second +1});
		bucket.push({now.first +1, now.second +1});
	}
}