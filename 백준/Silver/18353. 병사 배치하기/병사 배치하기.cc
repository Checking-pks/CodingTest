#include <iostream>
#include <vector>

using namespace std;

int main() {
	int N;
	cin >> N;

	vector<int> nList(1);
	cin >> nList[0];

	for (int i = 1, now; i < N; i++) {
		cin >> now;

		int l = 0, r = nList.size() - 1, m;
		while (l <= r) {
			m = (l + r) / 2;

			if (nList[m] <= now)
				r = m - 1;
			else
				l = m + 1;
		}

		if (nList.size() <= l)
			nList.push_back(now);
		else
			nList[l] = now;
	}

	cout << N - nList.size();
}