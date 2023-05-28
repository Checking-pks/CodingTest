#include <iostream>

using namespace std;

int main() {
	int doll, notBed;
	cin >> doll >> notBed;

	while (!(doll == 0 && notBed == 0)) {
		doll -= notBed;

		if (doll <= 1)
			cout << "0 0\n";
		else if (doll & 1) 
			cout << (doll - 3) /2 << " " << 1 << "\n";
		else
			cout << doll/2 << " " << 0 << "\n";

		cin >> doll >> notBed;
	}
}