#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<int> number = {
		2,2,2,
		3,3,3,
		4,4,4,
		5,5,5,
		6,6,6,
		7,7,7,7,
		8,8,8,
		9,9,9,9};
	
	int testcase;
	cin >> testcase;

	for (int i=0; i<testcase; i++) {
		bool isPalindromes = true;
		string str;
		cin >> str;

		for (int j=0; j<=str.length()/2; j++) {
			if (number[toupper(str[j])-'A'] != number[toupper(str[str.length() - 1 - j])-'A']) {
				isPalindromes = false;
				break;
			}
		}

		cout << (isPalindromes ? "YES\n" : "NO\n");
	}
}