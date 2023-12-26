#include <iostream>
#include <unordered_map>

using namespace std;

const int DIVISION = 1000000007;

unordered_map<long long, long long> numList;

long long recursion(long long n) {
	if (n < 1) return 0;
	if (n < 3) return 1;
	if (numList.find(n) != numList.end()) return numList[n];
	
	long long now;
	if (n&1) 
		now = recursion(n/2) * recursion(n/2) + 
			recursion(n/2+1) * recursion(n/2+1);
	else
		now = recursion(n/2-1) * recursion(n/2) +
			recursion(n/2) * recursion(n/2+1);

	numList[n] = now % DIVISION;
	return numList[n];
}

int main() {
	long long n;
	cin >> n;
	cout << recursion(n);
}