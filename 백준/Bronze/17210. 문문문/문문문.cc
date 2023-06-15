#include <iostream>

using namespace std;

int main() {
	int door, first;
	cin >> door >> first;

	if (door > 5)
		cout << "Love is open door";
	else 
		for (int i=2; i<=door; i++)
			cout << !(i&1^first) << "\n";
}