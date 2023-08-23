#include <iostream>
#include <vector>

using namespace std;

int main() {
	int testcase;
	cin >> testcase;

	cin.ignore();
	
	while (testcase--) {
		string str;
		getline(cin, str);

		if (str.substr(0, 10) == "Simon says")
			cout << str.substr(10) << " \n";
	}
}