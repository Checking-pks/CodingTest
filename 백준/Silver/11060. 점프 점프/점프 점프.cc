#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main() {
	int num;
	cin >> num;

	vector<int> numList(num, 0);
	vector<bool> alreadyVisit(num, false);
	queue<pair<int, int>> bucket;
	
	for (int i=0; i<num; i++)
		cin >> numList[i];

	bucket.push({0, 0});
	
	while (bucket.size()) {
		pair<int, int> now = bucket.front();
		
		if (now.first >= num-1) {
			cout << now.second;
			break;
		}

		bucket.pop();

		if (alreadyVisit[now.first]) continue;
		alreadyVisit[now.first] = true;

		for (int i=now.first+1; i<=now.first+numList[now.first]; i++) {
			bucket.push({i, now.second+1});
		}
	}

	if (bucket.size() == 0) cout << -1;
}