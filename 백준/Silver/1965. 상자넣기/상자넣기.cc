#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n;
	cin >> n;

	vector<int> countList(1);

	for (int i=0, now; i<n; i++) {
		cin >> now;

		int left=0, right=countList.size();

		while (left <= right) {
			int mid = (left + right)/2;

			if (countList[mid] < now) left = mid + 1;
			else right = mid - 1;
		}

		if (left >= countList.size()) countList.push_back(now);
		else countList[left] = now;
	}

	cout << countList.size() -1;
}