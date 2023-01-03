#include <iostream>

using namespace std;

int main() {
	int testcase;
	cin >> testcase;

	for (int i=0; i<testcase; i++) {
		long long lt, wt, le, we;
		cin >> lt >> wt >> le >> we;

		if (lt * wt > le * we)
			cout << "TelecomParisTech\n";
		else if (lt * wt < le * we)
			cout << "Eurecom\n";
		else
			cout << "Tie\n";
	}
}