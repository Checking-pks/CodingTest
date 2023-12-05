#include <iostream>
#include <vector>
#include <map>

using namespace std;

map<pair<int, int>, int> numList;

int dp(int n, int m) {
	if (m == 0) return 1;
	if (n == 1) return 1;
	if (numList.find({n, m}) != numList.end()) return numList[{n, m}];
	int now=0;
	for (int i=0; i<=m; i++) 
		now += dp(n-1, m-i);
	numList[{n, m}] = now;
	return now;
}

int main() {
	int N, M;
	cin >> N >> M;

	cout << dp(N, M-N);
}