#include <iostream>

using namespace std;

int main() {
	string result = "", octalNumber;
	bool isOut = false;
	
	cin >> octalNumber;

	for (char c:octalNumber) {
		int num = c - '0';
		result += to_string(num>3)
			+ to_string(num%4 > 1)
			+ to_string(num % 2);
	}

	if (result == "000") cout << 0;

	for (char c:result) {
		if (!isOut && c - '0') isOut = true;
		if (isOut) cout << c;
	}
}