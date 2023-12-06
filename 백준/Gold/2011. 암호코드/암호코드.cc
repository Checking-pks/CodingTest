#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

const int DIVISION = 1000000;
unordered_map<string, int> numList;

int dp(string s) {
	if (s == "") return 1;
	if (numList.find(s) != numList.end()) return numList[s];

	int now = 0;
	if ('1' <= s[0] && s[0] <= '9') {
		now += dp(s.substr(1));
	}
	
	if (s.size() > 1) {
		if ("26" >= s.substr(0, 2) && s.substr(0, 2) >= "10") {
			now += dp(s.substr(2));
		}
	}
	
	now %= DIVISION;
	numList[s] = now;
	return now;
}

int main() {
	string S;
	cin >> S;
	cout << dp(S);
}