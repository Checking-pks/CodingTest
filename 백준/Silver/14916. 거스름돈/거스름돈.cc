#include <iostream>

using namespace std;

int main() {
	int money, result;
	cin >> money;

	if (money == 1 || money == 3) {
		cout << -1;
		return 0;
	}

	result = money / 5;
	money -= result * 5;

	if (money & 1) {
		result--;
		money += 5;
	}
	
	result += money / 2;

	cout << result;
}