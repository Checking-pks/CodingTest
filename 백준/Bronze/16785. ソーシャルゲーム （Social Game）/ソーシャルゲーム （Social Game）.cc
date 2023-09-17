#include <iostream>

using namespace std;

int main() 
{
	int a, b, c;
	cin >> a >> b >> c;

	for (int i=1; c>0; i++) {
		c -= a;
		if (i%7 == 0) c -= b;
		if (c <= 0) cout << i;
	}
}