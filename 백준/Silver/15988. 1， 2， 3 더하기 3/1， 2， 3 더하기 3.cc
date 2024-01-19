#include <iostream>
#include <unordered_map>

using namespace std;

const int DIVISION = 1000000009;
unordered_map<int, int> numList;

int dp(int n) {
	if (n < 0) return 0;
	if (n == 0) return 1;

	if (numList.find(n) != numList.end())
		return numList[n];

	int now = 0;
	for (int i=1; i<=3; i++) {
		now += dp(n-i);
		now %= DIVISION;
	}

	numList[n] = now;
	return now;
}

int main() {
	int testcase;
	cin >> testcase;

	while (testcase--) {
		int n;
		cin >> n;
		cout << dp(n) << "\n";
	}
}