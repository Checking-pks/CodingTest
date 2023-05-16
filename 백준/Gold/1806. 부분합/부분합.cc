#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	vector<int> numList;
	int num, sum, left = 0, min = 100001;
	cin >> num >> sum;

	for (int i=0, nowSum = 0; i<num; i++) {
		int n;
		cin >> n;

		nowSum += n;
		numList.push_back(n);

		if (nowSum >= sum) {
			while (nowSum - numList[left] >= sum) 
				nowSum -= numList[left++];

			if (min > i - left) min = i - left;
		}
	}

	if (min == 100001)
		cout << 0;
	else 
		cout << min + 1;
}