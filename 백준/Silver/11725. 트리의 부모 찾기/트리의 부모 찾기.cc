#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main() {
	int nodes;
	cin >> nodes;

	vector<vector<int>> field(nodes+1, vector<int>());
	vector<int> result(nodes+1, 0);
	queue<int> bucket;
	
	for (int i=1, a, b; i<nodes; i++) {
		cin >> a >> b;

		field[a].push_back(b);
		field[b].push_back(a);
	}

	bucket.push(1);

	while(bucket.size()) {
		int nowBucket = bucket.front();
		bucket.pop();

		for (int n:field[nowBucket]) {
			if (!result[n]) {
				result[n] = nowBucket;
				bucket.push(n);
			}
		}
	}
	
	for (int i=2; i<=nodes; i++)
		cout << result[i] << "\n";
}