#include <iostream>

using namespace std;

int main() 
{
	int x, y, n;
	cin >> x >> y >> n;

	for (int i=1; i<=n; i++) {
		if (i%x && i%y) {
			cout << i << "\n";
			continue;
		}

		if (i%x==0) cout << "Fizz";
		if (i%y==0) cout << "Buzz";

		cout << "\n";
	}
}