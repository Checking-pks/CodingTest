#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main() {
	int N, M, A, B;
	cin >> N >> M >> A >> B;

	vector<bool> nList(N+1);
	for (int i=0, L, R; i<M; i++) {
		cin >> L >> R;
		for (int j=L; j<=R; j++)
			nList[j] = true;
	}

	queue<pair<int, int>> bucket;
	bucket.push({0, 0});
	nList[0] = true;
	
	while (bucket.size()) {
		auto now = bucket.front();
		if (now.first == N) break;
		bucket.pop();

		if (now.first + A <= N && !nList[now.first + A]) {
			bucket.push({now.first + A, now.second + 1});
			nList[now.first + A] = true;
		}
		if (now.first + B <= N && !nList[now.first + B]) {
			bucket.push({now.first + B, now.second + 1});
			nList[now.first + B] = true;
		}
	}

	if (bucket.size()) cout << bucket.front().second;
	else cout << -1;
}