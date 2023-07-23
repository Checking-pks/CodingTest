#include <iostream>

using namespace std;

int main() {
	cout << fixed;
	cout.precision(2);
	
	int num;
	cin >> num;

	for (int i=0; i<num; i++) {
		double price;
		cin >> price;

		cout << "$" << price * 0.8 << "\n";
	}
}