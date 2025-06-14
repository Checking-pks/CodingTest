#include <iostream>

using namespace std;

int main() {
	int T;
	cin >> T;

	while (T--) {
		int n;
		cin >> n;

		int plus = n / 5, stick = n % 5;

		while (plus--)
			cout << "++++ ";

		while (stick--)
			cout << "|";

		cout << "\n";
	}
}