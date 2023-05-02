#include <iostream>

using namespace std;

int main() {
	int num, target;
	cin >> num >> target;

	while (target != 0) {
		if (target % num == 0) cout << target << " is a multiple of " << num << ".\n";
		else cout << target << " is NOT a multiple of " << num << ".\n";
		
		cin >> target;
	}
}