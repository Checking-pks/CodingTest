#include <iostream>

using namespace std;

int main() {
	int testcase;
	cin >> testcase;

	while (testcase--) {
		string str;
		cin >> str;

		if (str == "P=NP") cout << "skipped\n";
		else {
			int plusPos = str.find('+');

			cout << stoi(str.substr(0, plusPos))
				+ stoi(str.substr(plusPos+1)) << "\n";
		}
	}
}