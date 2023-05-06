#include <iostream>

using namespace std;

int main() {
	int num;
	cin >> num;

	for (int i=1; i<=num; i++) {
		for (int j=i; j<num; j++) cout << " ";
		cout << "*";
		for (int j=1; j<(i-1)*2; j++) cout << " ";
		if (i>1) cout << "*";
		cout << "\n";
	}
}