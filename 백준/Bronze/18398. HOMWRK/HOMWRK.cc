#include <iostream>

using namespace std;

int main() {
	int testcase;
	cin >> testcase;

	for (int i=0; i<testcase; i++) {
		int problems;
		cin >> problems;

		for (int j=0; j<problems; j++) {
			int a, b;
			cin >> a >> b;
			cout << a + b << " " << a * b << "\n";
		}
	}
}