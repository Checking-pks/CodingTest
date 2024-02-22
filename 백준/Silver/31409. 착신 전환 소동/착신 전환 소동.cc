#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main() {
	int N, result=0;
	cin >> N;

	vector<int> nList(N+1);
	for (int i=1; i<=N; i++)
		cin >> nList[i];

	queue<int> bucket;
	vector<bool> visit(N+1);

	for (int i=1; i<=N; i++) {
		if (i == nList[i]) {
			result++;
			continue;
		}
		if (visit[i]) continue;
		bucket.push(i);

		while (bucket.size()) {
			int now = bucket.front();
			bucket.pop();
			if (visit[now]) continue;
			if (now == nList[now]) 
				break;
			visit[now] = true;
			bucket.push(nList[now]);
		}

		if (!visit[i])
			result++;
	}
	
	cout << result << "\n";

	if (result == N) {
		for (int i=2; i<=N; i++) {
			cout << i << " ";
		}
		cout << 1;
	} else {
		for (int i=1; i<=N; i++) {
			if (visit[i]) {
				cout << nList[i] << " ";
				continue;
			}

			for (int j=1; j<=N; j++) {
				if (visit[j]) {
					cout << j << " ";
					break;
				}
			}
		}
	}
}