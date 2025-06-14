#include <iostream>

using namespace std;

int main() {
    int testcase;
	cin >> testcase;

	for (int i=0, count; i<testcase; i++) {
		bool isGood = true;
		
		cin >> count;
		cout << "Denominations:";

		for (int j=0, num, prev = 0; j<count; j++) {
			cin >> num;
			cout << " " << num;

			if (isGood) {
				if (num < prev * 2) {
					isGood = false;
				}
				
				prev = num;
			}
		}

		cout << "\n" << (isGood ? "Good" : "Bad") << " coin denominations!\n\n";
	}
}