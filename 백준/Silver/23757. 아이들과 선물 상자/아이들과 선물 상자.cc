#include <iostream>
#include <queue>

using namespace std;

int main() {
	bool result = true;
	int N, M;
	cin >> N >> M;

	priority_queue<int> pq;
	for (int i=0, now; i<N; i++) {
		cin >> now;
		pq.push(now);
	}

	for (int i=0, m, now; i<M; i++) {
		cin >> now;
		m = pq.top() - now;
		pq.pop();

		if (m < 0) result = false;
		pq.push(m);
	}

	cout << result;
}