#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n;
	cin >> n;

	vector<int> nList(1);

	for (int i=0, now; i<n; i++) {
		cin >> now;

		int l = 0, r = nList.size(), m;

		while (l <= r) {
			m = (l + r) / 2;

			if (nList[m] >= now)
				r = m - 1;
			else
				l = m + 1;
		}

		if (nList.size() <= l)
			nList.push_back(now);
		else
			nList[l] = now;
	}

	cout << nList.size() - 1;
}