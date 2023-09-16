#include <iostream>

using namespace std;

int main() 
{
	int testcase;
	cin >> testcase;

	while (testcase--) {
		int have, need;
		cin >> have >> need;

		if (have < need) cout << "NO BRAINS\n";
		else cout << "MMM BRAINS\n";
	}
}