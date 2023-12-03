#include <iostream>
#include <unordered_map>

using namespace std;

unordered_map<int, pair<long long, long long>> numList;

const long long DIVISION = 1000000009;

pair<long long, long long> dp(int n) {
	if (n <= 0) return {0, 0};
	if (numList.find(n) != numList.end()) return numList[n];

	pair<long long, long long> now;

	if (n&1) 
		now = {0, dp(n-1).first + dp(n-1).second};
	else
		now = {dp(n-2).first + dp(n-2).second + dp(n-4).second, dp(n-2).first};

	now.first  %= DIVISION;
	now.second %= DIVISION;
	
	numList[n] = now;

	return now;
}

int main() {
	numList[1] = {0, 1};
	numList[2] = {1, 1};
	
	int testcase;
	cin >> testcase;

	while (testcase--) {
		int num;
		cin >> num;
		cout << (dp(num).first + dp(num).second) % DIVISION << "\n";
	}
}