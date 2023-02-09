#include <iostream>

using namespace std;

int main() {
	int money;
	float fee;
	cin >> money;

	fee = 25 + money * 0.01f;

	if (fee > 2000) cout << 2000;
	else if (fee < 100) cout << 100;
	else cout << fee;
}