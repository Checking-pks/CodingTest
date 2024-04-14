#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int N, K, M;
	cin >> N >> K >> M;

	vector<int> nList;
	for (int i = 0, now; i < N; i++) {
		cin >> now;

		if (now <= K) continue;

		now -= K;
		if (now >= K) now -= K;

		nList.push_back(now);
	}

	int l = 1, r = 1'000'000'000, m;
	while (l <= r) {
		int now = 0;
		m = (l + r) / 2;

		for (int i = 0; m && i < nList.size(); i++)
			now += nList[i] / m;

		if (now < M)
			r = m - 1;
		else
			l = m + 1;
	}

	cout << (r ? r : -1);
}