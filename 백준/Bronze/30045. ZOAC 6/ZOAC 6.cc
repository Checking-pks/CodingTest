#include <iostream>

using namespace std;

int main() {
	int num, result=0;
	cin >> num;

	for (int i=0; i<num; i++) {
		string s;
		cin >> s;

		result += (s.find("01") != string::npos || s.find("OI") != string::npos);
	}

	cout << result;
}