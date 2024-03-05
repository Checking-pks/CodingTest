#include <iostream>
#include <vector>

using namespace std;

int main() {
	int N;
	cin >> N;

	vector<int> nList(1, 1001);
	for (int i=0, now, l, r, m; i<N; i++) {
		cin >> now;

		l = 0, r = nList.size();
		while (l <= r) {
			m = (l + r) / 2;

			if (nList[m] > now)
				l = m + 1;
			else
				r = m - 1;
		}

		if (nList.size() == l)
			nList.push_back(now);
		else
			nList[l] = now;
	}

	cout << nList.size() - 1;
}