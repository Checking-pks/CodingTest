#include <iostream>

using namespace std;

int main() {
	int p, c;
	cin >> p >> c;
	cout << min(p, c+1) * 2 - 1;
}