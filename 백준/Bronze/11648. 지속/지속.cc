#include <iostream>

using namespace std;

int main() {
	int result=0;
	string num;
	cin >> num;

	while (num.length() > 1) {
		int newNum = 1;
		for (char c:num) newNum *= (c - '0');
		num = to_string(newNum);
		result++;
	}

	cout << result;
}