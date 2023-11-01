#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int testcase;
	cin >> testcase;

	while (testcase--) {
		long long num;
		cin >> num;

		if (to_string(num)[0] >= '5') {
			string newNum = '4' + string(log10(num), '9');
			num = stoll(newNum);
		} 
		
		cout << num * (stoll(string(log10(num)+1, '9')) - num) << "\n";
	}
}