#include <iostream>

using namespace std;

int main() {
	int testcase;
	cin >> testcase;

	while (testcase--) {
		int result=0;
		int a, b;
		cin >> a >> b;

		for (int i=1; b<=a; i+=2) {
			result += i;
			a -= b;
		}

		cout << result << "\n";
	}
}