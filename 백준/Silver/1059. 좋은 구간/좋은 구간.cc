#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int L;
	cin >> L;

	vector<int> lList(L);
	for (int i=0; i<L; i++)
		cin >> lList[i];

	int n;
	cin >> n;

	sort(lList.begin(), lList.end());
	int maxNum = *lower_bound(lList.begin(), lList.end(), n) - 1;
	int minNum = *(lower_bound(lList.begin(), lList.end(), n) - 1) + 1;

	if (maxNum < n) {
		cout << 0;
		return 0;
	}

	int result = 0;
	for (int i=minNum; i<=n; i++) 
		for (int j=n; j<=maxNum; j++) 
			if (i != j)
				result++;

	cout << result;
}