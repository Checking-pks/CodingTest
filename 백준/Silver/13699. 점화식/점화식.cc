#include <iostream>
#include <unordered_map>

using namespace std;

unordered_map<long long, long long> numList;

long long dp(long long n) {
	if (numList.find(n) != numList.end()) return numList[n];
	if (n == 0) return 1;

	long long result = 0;

	for (long long i=0; i<n; i++) 
		result += dp(i) * dp(n-1-i);

	numList[n] = result;
	return result;
}

int main() {
	long long n;
	cin >> n;
	cout << dp(n);
}