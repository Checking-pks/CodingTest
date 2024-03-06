#include <iostream>
#include <vector>
#include <queue>
#include <unordered_set>

using namespace std;

vector<int> flipList = {
	7, 56, 448, 73, 146, 292, 273, 84
};

void solve() {
	int num = 0;

	for (int i=0; i<9; i++) {
		char c;
		cin >> c;

		if (c == 'H') 
			num += (1 << i);
	}

	queue<pair<int, int>> bucket;
	unordered_set<int> visit;
	bucket.push({0, num});

	while (bucket.size()) {
		auto now = bucket.front();
		if (now.second == 0 || now.second == 511)
			break;
		bucket.pop();

		for (int i=0; i<8; i++) {
			int next = now.second ^ flipList[i];
			if (visit.find(next) != visit.end())
				continue;
			visit.insert(next);
			
			bucket.push({
				now.first + 1,
				next
				});
		}
	}

	if (bucket.size()) 
		cout << bucket.front().first << "\n";
	else
		cout << "-1\n";
}

int main() {
	int T;
	cin >> T;

	while (T--) {
		solve();
	}
}