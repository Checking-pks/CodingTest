#include <iostream>
#include <queue>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int N;
	cin >> N;

	int i, j, now;
	priority_queue<int, vector<int>, greater<>> maxList;
	for (i=0; i<N; i++) {
		for (j=0; j<N; j++) {
			cin >> now;
			maxList.push(now);
			if (maxList.size() > N)
				maxList.pop();
		}
	}

	cout << maxList.top();
}