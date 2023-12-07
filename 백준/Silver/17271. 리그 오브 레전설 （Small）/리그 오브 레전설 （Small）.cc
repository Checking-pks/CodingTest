#include <iostream>
#include <unordered_map>

using namespace std;

const int DIVISION = 1000000007;
unordered_map<int, int> numList;

int dp(int n, int m) {
	if (n < 0) return 0;
	if (n == 0) return 1;
	if (numList.find(n) != numList.end()) return numList[n];

	int now = (dp(n-1, m) + dp(n-m, m)) % DIVISION;
	numList[n] = now;
	return now;
}

int main() {
	int N, M;
	cin >> N >> M;
	cout << dp(N, M);
}