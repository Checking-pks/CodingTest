#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	int N;
	cin >> N;

	vector<int> result(N, -1);
	stack<pair<int, int>> bucket;
	for (int i = 0, now; i < N; i++) {
		cin >> now;
		
		while (bucket.size() && bucket.top().first < now) {
			result[bucket.top().second] = now;
			bucket.pop();
		}

		bucket.push({now, i});
	}

	for (int n : result)
		cout << n << " ";
}