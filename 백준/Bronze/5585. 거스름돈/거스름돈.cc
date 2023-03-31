#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int money, coin = 0;
	cin >> money;

	int change = 1000 - money;

	if (change / 500 >= 1) {
		coin += int(change / 500);
		change %= 500;
	}

	if (change / 100 >= 1) {
		coin += int(change / 100);
		change %= 100;
	}

	if (change / 50 >= 1) {
		coin += int(change / 50);
		change %= 50;
	}

	if (change / 10 >= 1) {
		coin += int(change / 10);
		change %= 10;
	}

	if (change / 5 >= 1) {
		coin += int(change / 5);
		change %= 5;
	}

	if (change / 1 >= 1) {
		coin += int(change / 1);
		change %= 1;
	}

	cout << coin;

}