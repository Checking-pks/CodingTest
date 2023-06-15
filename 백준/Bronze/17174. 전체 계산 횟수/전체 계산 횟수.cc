#include <iostream>

using namespace std;

int main() {
	int result = 0;
	int money, set;
	cin >> money >> set;

	while (money) {
		result += money;
		money /= set;
	}

	cout << result;
}