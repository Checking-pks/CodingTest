#include <iostream>
using namespace std;

int main() {
	int N, l, r;
	cin >> N;

	cout << "? " << 1 << endl;
	cin >> l;

	cout << "? " << N << endl;
	cin >> r;

	if (l < r)
		cout << "! 1";
	else if (l > r)
		cout << "! -1";
	else
		cout << "! 0";
}