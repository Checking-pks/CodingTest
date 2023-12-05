#include <iostream>
#include <vector>
#include <map>

using namespace std;

const int DIVISION = 1000000000;
map<pair<vector<bool>, pair<int, int>>, long long> numList;

int dp(int n, int d, vector<bool> visit) {
	if (0 > n || n > 9) return 0;
	visit[n] = true;
	if (d == 0) {
		for (int i=0; i<10; i++)
			if (!visit[i]) 
				return 0;
		return 1;
	}
	if (numList.find({visit, {n, d}}) != numList.end()) return numList[{visit, {n, d}}];
	int now = (dp(n+1, d-1, visit) + dp(n-1, d-1, visit)) % DIVISION;
	numList[{visit, {n, d}}] = now;
	return now;
}

int main() {
	int n, result=0;
	cin >> n;

	if (n < 10) {
		cout << 0;
		return 0;
	}

	for (int i=1; i<=9; i++) {
		result += dp(i, n-1, vector<bool>(10, false));
		result %= DIVISION;
	} 

	cout << result;
}