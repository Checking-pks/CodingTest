#include <iostream>

using namespace std;

int main() {
	string result = "";
	int num;
	cin >> num;

	while (num) {
		result = to_string(num%9) + result;
		num /= 9;
	}

	cout << result;
}