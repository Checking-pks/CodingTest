#include <iostream>

using namespace std;

int main() {
	int num;
	cin >> num;

	for (int i=1; i<num; i++) {
		for (int j=0; j<num-i; j++) cout << " ";
		cout << "*";
		for (int j=0; j<2*i-3; j++) cout << " ";
		if (i > 1) cout << "*";
		cout << "\n";
	}

	for (int i=0; i<num*2-1; i++) cout << "*";
}