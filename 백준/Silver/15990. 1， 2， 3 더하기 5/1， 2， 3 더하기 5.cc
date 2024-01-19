#include <iostream>
#include <map>

using namespace std;

const int DIVISION = 1000000009;

map<pair<int, int>, int> numList;

int dp(int n, int dif) {
	if (n<0) return 0;
	if (n==0) return 1;

	if (numList.find({n, dif}) != numList.end()) 
		return numList[{n, dif}];

	int now = 0;
	if (dif != 1) {
		now += dp(n-1, 1);
		now %= DIVISION;
	}
	if (dif != 2) {
		now += dp(n-2, 2);
		now %= DIVISION;
	}
	if (dif != 3) {
		now += dp(n-3, 3);
		now %= DIVISION;
	}
	numList[{n, dif}] = now;
	return now;
}

int main() {
	int testcase;
	cin >> testcase;

	while (testcase--) {
		int n;
		cin >> n;
		cout << dp(n, 0) << "\n";
	}
}