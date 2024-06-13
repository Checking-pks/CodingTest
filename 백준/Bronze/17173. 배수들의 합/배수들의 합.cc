#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int N, M;
	cin >> N >> M;

	vector<bool> nList(N+1);
	for (int i=0, now; i<M; i++) {
		cin >> now;

		if (nList[now]) continue;

		for (int j=now; j<=N; j+=now)
			nList[j] = true;
	}

	int sum = 0;
	for (int i=1; i<=N; i++)
		if (nList[i])
			sum += i;

	cout << sum;
}