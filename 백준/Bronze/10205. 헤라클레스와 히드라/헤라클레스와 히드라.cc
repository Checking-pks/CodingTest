#include <iostream>

using namespace std;

int main() {
	int testcase;
	cin >> testcase;

	for (int i=1; i<=testcase; i++) {
		int init;
		string behavior;
		cin >> init >> behavior;

		for (int j=0; j<behavior.length(); j++) {
			if (behavior[j] == 'c') init++;
			if (behavior[j] == 'b') init--;
		}

		cout << "Data Set " << i << ":\n";
		cout << init << "\n\n";
	}
}