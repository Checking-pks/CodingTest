#include <iostream>
#include <string>

using namespace std;

int main() {
	int testcase;
	cin >> testcase;

	for (int i=0; i<testcase; i++) {
		string input, output;
		cin >> input >> output;
		cout << ((input == output) ? "OK" : "ERROR") << "\n";
	}
}