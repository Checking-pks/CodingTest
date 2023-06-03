#include <iostream>

using namespace std;

int main() {
	int testcase;
	cin >> testcase;

	while (testcase--) {
		string str;
		cin >> str;

		int score = (str[0] - 'A') * 26 * 26
					+ (str[1] - 'A') * 26
					+ (str[2] - 'A')
					- stoi(str.substr(4));

		if (-100 <= score && score <= 100)
			cout << "nice\n";
		else
			cout << "not nice\n";
	}
}