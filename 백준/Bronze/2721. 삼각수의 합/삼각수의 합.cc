#include <iostream>

using namespace std;

int main() {
	int testcase;
	cin >> testcase;

	for (int i=0; i<testcase; i++) {
		int num, result = 0;
		cin >> num;

		for (int j=1; j<=num; j++) 
			result += j * (j+1) * (j+2) / 2;

		cout << result << "\n";
	}
}