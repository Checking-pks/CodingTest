#include <iostream>

using namespace std;

int main() {
	string s;
	
	while (cin >> s) {
		int n = stod(s.substr(2));
		int result=0;

		for (int i=n; i<=20000; i++) {
			double j = 1. * i*n / (i-n);
			if (j < i) continue;
			if (j == (int)j) result++;
		}

		cout << result << "\n";
	}
}