#include <iostream>

using namespace std;

int main() {
	int birthFrom, birthEnd, deathFrom, deathEnd;
	cin >> birthFrom >> birthEnd >> deathFrom >> deathEnd;

	while (birthFrom != 0 || birthEnd != 0 || deathFrom != 0 || deathEnd != 0) {
		cout << deathFrom - birthEnd << " " << deathEnd - birthFrom << "\n";
		cin >> birthFrom >> birthEnd >> deathFrom >> deathEnd;
	}
}