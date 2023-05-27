#include <iostream>

using namespace std;

int main() {
	int testcase;
	cin >> testcase;

	while(testcase--) {
		int candy, people;
		cin >> candy >> people;

		cout << "You get " << candy / people << " piece(s) and your dad gets " << candy % people << " piece(s).\n";
	}
}