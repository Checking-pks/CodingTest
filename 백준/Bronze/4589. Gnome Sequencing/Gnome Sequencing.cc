#include <iostream>

using namespace std;

int main() {
	int num;
	cin >> num;
	cout << "Gnomes:\n";
	
	for (int i=0; i<num; i++) {
		int a, b, c;
		cin >> a >> b >> c;

		if ((a > b && b > c) || (a < b && b < c))
			cout << "Ordered\n";
		else 
			cout << "Unordered\n";
	}
}