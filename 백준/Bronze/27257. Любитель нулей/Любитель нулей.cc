#include <iostream>

using namespace std;

int main() {
	int num, result = 0;
	cin >> num;

	string str = to_string(num);

	for (int i=0, stack=0; i<str.length(); i++) {
		if (str[i] == '0') {
			stack++;
		} else {
			if (result < stack)
				result = stack;
		}
	}

	cout << result;
}