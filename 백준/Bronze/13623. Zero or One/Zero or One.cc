#include <iostream>

using namespace std;

int main() {
	bool a, b, c;
	cin >> a >> b >> c;

	if (a+b+c==0 || a+b+c == 3) cout << "*";
	else if (a==b&&b!=c) cout << "C";
	else if (a==c&&c!=b) cout << "B";
	else if (b==c&&c!=a) cout << "A";
}