#include <iostream>

using namespace std;

int main() {
	long long result = 0;
	string n1, n2;
	cin >> n1 >> n2;

	for (char c1:n1) {
		for (char c2:n2) {
			result += (c1-'0') * (c2-'0');
		}
	}

	cout << result;
}