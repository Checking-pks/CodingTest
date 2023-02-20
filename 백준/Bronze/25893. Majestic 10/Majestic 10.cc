#include <iostream>

using namespace std;

int main() {
	int testcase;
	cin >> testcase;

	for (int i=0; i<testcase; i++) {
		int stack = 0;

		for (int j=0, num; j<3; j++) {
			cin >> num;
			cout << num << " ";
			stack += (num >= 10);
		}
        
		switch (stack) {
			case 0:
				cout << "\nzilch\n\n";
				break;
			case 1:
				cout << "\ndouble\n\n";
				break;
			case 2:
				cout << "\ndouble-double\n\n";
				break;
			case 3:
				cout << "\ntriple-double\n\n";
				break;
		}
	}
}