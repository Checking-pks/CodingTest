#include <iostream>

using namespace std;

int main() {
	cout << fixed;
	cout.precision(2);
	
	int testcase;
	cin >> testcase;

	for (int i=0; i<testcase; i++) {
		double total = 0;
		int num;
		cin >> num;

		for (int j=0; j<num; j++) {
			string str;
			double n, p;
			cin >> str >> n >> p;

			total += n * p;
		}

		cout << "$" << total << "\n";
	}
}