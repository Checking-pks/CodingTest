#include <iostream>

using namespace std;

int main() {
	int num, result = 0;
	cin >> num;

	while (num) {
		for (int i=1; i <= num; i++) {
			num -= i;
			result++;
		}
	}

	cout << result;
}