#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

unordered_map<int, string> numToBracket;
unordered_map<string, int> bracketToNum;

void init() {
	for (int i=0; i<=15; i++) {
		string now = "{";
		
		for (int j=0; j<i; j++) {
			if (j) now += ',';
			now += numToBracket[j];
		}
		
		now += "}";

		numToBracket.insert({i, now});
		bracketToNum.insert({now, i});
	}
}

int main() {
	init();
	
	int testcase;
	cin >> testcase;

	while (testcase--) {
		string s1, s2;
		cin >> s1 >> s2;

		int sum = bracketToNum[s1] + bracketToNum[s2];
		cout << numToBracket[sum] << "\n";
	}
}