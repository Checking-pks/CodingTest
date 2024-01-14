#include <iostream>
#include <vector>
#include <queue>

using namespace std;

vector<int> GetSquareList(int num) {
	vector<int> result;

	for (int i=1; i*i<=num; i++) 
		result.push_back(i*i);

	return result;
}

int main() {
	int N;
	cin >> N;

	vector<int> squareList = GetSquareList(N);
	vector<bool> visit(N+1);
	queue<pair<int, int>> bucket;
	
	for (int i=0; i<squareList.size(); i++) {
		visit[squareList[i]] = true;
		bucket.push({squareList[i], 1});
	}
	
	while (bucket.size()) {
		auto now = bucket.front();
		if (now.first == N) break;
		bucket.pop();

		for (int i=0, next; i<squareList.size(); i++) {
			next = now.first + squareList[i];
			if (visit[next]) continue;
			if (next > N) continue;
			visit[next] = true;
			bucket.push({next, now.second + 1});
		}
	}

	cout << bucket.front().second;
}