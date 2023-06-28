#include <iostream>

using namespace std;

int main() {
	int testcase;
	cin >> testcase;

	while (testcase--) {
		int hamming = 0;
		string n1, n2;
		cin >> n1 >> n2;

		for (int i=0; i<n1.length(); i++)
			hamming += (n1[i] != n2[i]);

		cout << "Hamming distance is " << hamming << ".\n";
	}
}