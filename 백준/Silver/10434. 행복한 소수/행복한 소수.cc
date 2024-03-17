#include <iostream>
#include <unordered_map>

using namespace std;

unordered_map<int, bool> happyList = {{1, true}};

bool isPrime(int n) {
	if (n == 1) return false;

	for (int i=2; i*i<=n; i++)
		if (n % i == 0)
			return false;

	return true;
}

bool isHappy(int n) {
	if (happyList.find(n) != happyList.end())
		return happyList[n];

	string s = to_string(n);
	int newNum = 0;

	for (char c:s) 
		newNum += (c-'0') * (c-'0');

	happyList[n] = false;
	bool nowHappy = isHappy(newNum);
	happyList[n] = nowHappy;
	
	return nowHappy;
}

int main() {
	int P;
	cin >> P;

	while (P--) {
		int testcaseNum, M;
		cin >> testcaseNum >> M;
		cout << testcaseNum << " " << M << " ";

		if (!isPrime(M)) {
			cout << "NO\n";
			continue;
		}

		cout << (isHappy(M) ? "YES\n" : "NO\n");
	}
}