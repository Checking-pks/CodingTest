#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int n;
	cin >> n;

	int aSum = 0, bSum = 0;
	vector<int> a(n), b;
	for (int i=0; i<n; i++) {
		cin >> a[i];
		aSum += a[i];
	}

	sort(a.begin(), a.end());

	for (int i=1, j=0; i<=2*n; i++) {
		if (j < n && a[j] == i) {
			j++;
			continue;
		}

		b.push_back(i);
		bSum += i;
	}

	for (int i=1, now = 0; aSum && bSum; i = !i) {
		if (i & 1) {
			auto next = upper_bound(a.begin(), a.end(), now);

			if (next == a.end()) {
				now = 0;
				continue;
			}

			now = *next;
			*next = 0;
			aSum -= now;
			
			sort(a.begin(), a.end());
		} else {
			auto next = upper_bound(b.begin(), b.end(), now);

			if (next == b.end()) {
				now = 0;
				continue;
			}

			now = *next;
			*next = 0;
			bSum -= now;

			sort(b.begin(), b.end());
		}
	}
	
	int aScore = 0, bScore = 0;

	while (b.back() != 0) {
		aScore++;
		b.pop_back();
	}

	while (a.back() != 0) {
		bScore++;
		a.pop_back();
	}

	cout << aScore << "\n" << bScore;
}