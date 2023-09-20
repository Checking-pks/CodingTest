#include <iostream>

using namespace std;

int main() {
	int testcase;
	cin >> testcase;

	for (int i=1; i<=testcase; i++) {
		cout << "Data Set " << i << ":\n";
		
		int threshold, now;
		cin >> threshold >> now;

		if (threshold <= now) cout << "no ";

		while (threshold > now) {
			now *= 5;
			if (threshold > now) cout << "mega ";
		}

		cout << "drought\n\n";
	}
}