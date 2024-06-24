#include <iostream>

using namespace std;

int main() {
	string a, b, c;
	cin >> a >> b >> c;

	int r = 0;

	if (a[0] != 'F' && a[0] != 'B') 
		r = stoi(a) + 3;
	else if (b[0] != 'F' && b[0] != 'B') 
		r = stoi(b) + 2;
	else if (c[0] != 'F' && c[0] != 'B') 
		r = stoi(c) + 1;

	if (r % 3 == 0 && r % 5 == 0)
		cout << "FizzBuzz";
	else if (r % 3 == 0)
		cout << "Fizz";
	else if (r % 5 == 0)
		cout << "Buzz";
	else
		cout << r;
}