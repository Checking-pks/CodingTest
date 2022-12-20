#include <iostream>

using namespace std;

int main() {
	int testcase;
	cin >> testcase;

	for (int i=0, num1, num2; i<testcase; i++) {
		cin >> num1 >> num2;

		int lcm = num1;
		
		while (lcm % num2 != 0) 
			lcm += num1;

		cout << lcm << "\n";
	}
}