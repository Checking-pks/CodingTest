#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

bool cmp(int a, int b) {
	return abs(a) < abs(b);
}

int main() {
	int min = 2000000001, n1, n2;
	int num;
	cin >> num;

	vector<int> numList(num, 0);

	for (int i=0; i<num; i++)
		cin >> numList[i];

	sort(numList.begin(), numList.end(), cmp);

	for (int i=1; i<num; i++) {
		if (min > abs(numList[i] + numList[i-1])) {
			min = abs(numList[i] + numList[i-1]);
			n1 = numList[i-1];
			n2 = numList[i];
		}
	}

	if (n1 < n2)
		cout << n1 << " " << n2;
	else
		cout << n2 << " " << n1;
}