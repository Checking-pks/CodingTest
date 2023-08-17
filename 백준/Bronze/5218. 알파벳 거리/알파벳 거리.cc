#include <iostream>

using namespace std;

int main() {
	int testcase;
	cin >> testcase;

	while (testcase--) {
		string str1, str2;
		cin >> str1 >> str2;

		cout << "Distances:";
		
		for (int i=0; i<str1.length(); i++) {
			cout  << " " << (str1[i] > str2[i] ? str2[i] - str1[i] +26 : str2[i] - str1[i]);
		}

		cout << "\n";
	}
}