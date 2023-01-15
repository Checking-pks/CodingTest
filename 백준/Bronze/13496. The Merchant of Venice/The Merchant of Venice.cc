#include <iostream>

using namespace std;

int main() {
	int testcase;
	cin >> testcase;

	for (int i=0; i<testcase; i++) {
		if (i) cout << "\n";
		
		int num, speed, day, result = 0;
		cin >> num >> speed >> day;

		for (int j=0; j<num; j++) {
			int dis, price;
			cin >> dis >> price;

			if (speed * day >= dis)
				result += price;
		}

		cout << "Data Set " << i + 1 << ":\n" << result << "\n";
	}
}