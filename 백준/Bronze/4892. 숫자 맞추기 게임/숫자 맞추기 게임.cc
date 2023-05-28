#include <iostream>

using namespace std;

int main() {
	int num;
	cin >> num;

	for (int i=1; num; i++) {
		cout << i << ". ";

		if (num & 1)
			cout << "odd ";
		else
			cout << "even ";

		cout << num/2 << "\n";
		
		cin >> num;
	}
}