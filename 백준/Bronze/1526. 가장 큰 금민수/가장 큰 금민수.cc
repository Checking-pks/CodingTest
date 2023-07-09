#include <iostream>

using namespace std;

bool check(string num) {
	for (int i=0; i<num.length(); i++)
		if (num[i] != '7' && num[i] != '4')
			return false;

	return true;
}

int main() {
	int num;
	cin >> num;

	for (;true; num--) {
		if (check(to_string(num))) {
			cout << num;
			break;
		}
	}
}