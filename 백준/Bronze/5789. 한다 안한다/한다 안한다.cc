#include <iostream>

using namespace std;

int main() {
    int testcase;
	cin >> testcase;

	while (testcase--) {
		string str;
		cin >> str;

		cout << "Do-it";

		if (str[str.length()/2-1] != str[str.length()/2])
			cout << "-Not";
		
		cout << "\n";
	}
}