#include <iostream>

using namespace std;

int main() {
    int result = 0, num;
	char sign = ' ';
	cin >> result;

	for (int i=0; sign != '='; i++) {
		if (i&1) {
			cin >> num;

			switch (sign) {
				case '+':
					result += num;
					break;
				case '-':
					result -= num;
					break;
				case '*':
					result *= num;
					break;
				case '/':
					result /= num;
					break;
			}
		}
		else cin >> sign;
	}

	cout << result;
}