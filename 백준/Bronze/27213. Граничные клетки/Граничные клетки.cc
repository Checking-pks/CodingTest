#include <iostream>

using namespace std;

int main() {
    int r, c;
	cin >> r >> c;

	if (r==1 || c==1)
		cout << (r > c ? r : c);
	else
		cout << --r * 2 + --c * 2;
}