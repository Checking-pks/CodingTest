#include <iostream>
#include <vector>

using namespace std;

int main() {
	int num;

	cin >> num;

	for (int i=0, level; i<num; i++) {
		cin >> level;

		if (level >= 300) cout << "1 ";
		else if (level >= 275) cout << "2 ";
		else if (level >= 250) cout << "3 ";
		else cout << "4 ";
	}
}