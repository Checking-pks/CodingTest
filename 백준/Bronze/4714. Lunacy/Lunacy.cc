#include <iostream>

using namespace std;

int main() {
	cout << fixed;
	cout.precision(2);
	
	double num;
	cin >> num;

	while (num >= 0) {
		cout << "Objects weighing " << num << " on Earth will weigh " << num * 0.167 << " on the moon.\n";
		cin >> num;
	}
}