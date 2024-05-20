#include <algorithm>
#include <iostream>

using namespace std;

bool solve(string s) {
	if (s.length() <= 1)
		return true;

	string sReverse = s;
	reverse(sReverse.begin(), sReverse.end());

	if (s != sReverse)
		return false;

	return solve(s.substr(0, s.length() / 2));
}

int main() {
	string s;
	cin >> s;
	cout << (solve(s) ? "AKARAKA" : "IPSELENTI");
}