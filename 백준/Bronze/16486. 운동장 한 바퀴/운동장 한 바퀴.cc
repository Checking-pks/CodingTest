#include <iostream>

using namespace std;

int main() {
	cout << fixed;
	cout.precision(6);
	
    int d1, d2;
    cin >> d1 >> d2;
    cout << 2 * d1 + 2 * 3.141592 * d2;
}