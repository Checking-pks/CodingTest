#include <iostream>

using namespace std;

int main() {
    int w, l, h;
	cin >> w >> l >> h;

	if ((w > l ? l : w) / h >= 2 && (w > l ? w/l : l/w) <= 2)
		cout << "good";
	else
		cout << "bad";
}