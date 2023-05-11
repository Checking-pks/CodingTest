#include <iostream>

using namespace std;

int main() {
	int testcase;
	cin >> testcase;

	while (testcase--) {
		int num, binary = 1;
		cin >> num;

		for (int i=0; binary <= num; i++) {
			if (num & binary) cout << i << " ";
			binary *= 2;
		}
	}
}