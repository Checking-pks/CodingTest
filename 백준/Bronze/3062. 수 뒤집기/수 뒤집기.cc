#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int testcase;
	cin >> testcase;

	while (testcase--) {
		int num, reverseNum = 0;
		cin >> num;

		for (int i=num; i; i/=10) {
			reverseNum *= 10;
			reverseNum += i % 10;
		}

		bool isTrue = true;
		string numStr = to_string(num + reverseNum);
		string reverseNumStr = numStr;

		reverse(reverseNumStr.begin(), reverseNumStr.end());

		if (numStr == reverseNumStr)
			cout << "YES\n";
		else
			cout << "NO\n";
	}
}