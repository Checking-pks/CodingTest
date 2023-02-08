#include <iostream>

using namespace std;

int main() {
	int apple, pear;
	cin >> apple >> pear;

	if (apple * 7 > pear * 13) cout << "Axel";
	else if (apple * 7 < pear * 13) cout << "Petra";
	else cout << "lika";
}