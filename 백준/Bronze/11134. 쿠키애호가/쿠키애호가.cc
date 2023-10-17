#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	for (int i=0; i<t; i++) {
		double n, c;
		cin >> n >> c;
		cout << int(n/c) + (int(n/c) != n/c) << "\n";
	}
}