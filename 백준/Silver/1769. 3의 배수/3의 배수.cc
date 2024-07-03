#include <iostream>

using namespace std;

int main() {
	string X;
	int times = 0;
	cin >> X;

	while (X.length() > 1) {
		int newX = 0;

		for (char c : X) 
			newX += (c - '0');

		X = to_string(newX);

		times++;
	}

	cout << times << "\n" 
		<< (X == "3" || X == "6" || X == "9" ? "YES" : "NO");
}