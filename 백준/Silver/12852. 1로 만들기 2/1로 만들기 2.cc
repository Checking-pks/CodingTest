#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<int> appendValue(vector<int> origin, int val) {
	origin.push_back(val);
	return origin;
}

int main() {
	cin.sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	queue<vector<int>> bucket;
	int num;
	cin >> num;

	vector<bool> isVisit(num+1, false);

	bucket.push({num});

	while (bucket.size()) {
		vector<int> now = bucket.front();
		bucket.pop();

		if (isVisit[now.back()]) continue;
		isVisit[now.back()] = true;
		
		if (now.back() == 1) {
			cout << now.size() - 1 << "\n";
			for (int i:now)
				cout << i << " ";
			break;
		}

		if (now.back() % 3 == 0)
			bucket.push(appendValue(now, now.back()/3));
		if (now.back() % 2 == 0)
			bucket.push(appendValue(now, now.back()/2));
		bucket.push(appendValue(now, now.back()-1));
	}
}