#include <iostream>

using namespace std;

int main() {
	int tax;
	cin >> tax;

	while (tax) {
		if (tax <= 1000000)
			cout << tax << "\n";
		else if (tax <= 5000000)
			cout << int(tax * 0.9) << "\n";
		else
			cout << int(tax * 0.8) << "\n";
		cin >> tax;
	}
}