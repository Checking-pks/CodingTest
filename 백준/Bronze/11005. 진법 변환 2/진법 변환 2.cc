#include <iostream>

using namespace std;

int main() {
	string result = "";
	int num, n;
	cin >> num >> n;

	while (num) {
		int nowNum = num % n;
		num /= n;

		if (nowNum > 9)
			result = char('A' + (nowNum - 10)) + result;
		else
			result = to_string(nowNum) + result;
	}

	cout << result;
}