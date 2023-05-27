#include <iostream>

using namespace std;

int main() {
	string num;
	cin >> num;

	while (num != "0") {
		while (num.length() > 1) {
			int newNum = 0;

			for (char c:num) 
				newNum += c - '0';

			num = to_string(newNum);
		}

		cout << num << "\n";
		cin >> num;
	}
}