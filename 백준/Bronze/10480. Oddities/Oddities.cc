#include <iostream>

using namespace std;

int main() {
	int testcase;
	cin >> testcase;

	for (int i=0, num; i<testcase; i++) {
		cin >> num;

		cout << num << " is " << ((num & 1) ? "odd" : "even") << "\n";
	}
}