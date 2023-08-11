#include <iostream>

using namespace std;

int main() {
	int level;
	cin >> level;
	cout << 1 + (level > 205) + (level > 217) + (level > 228);
}