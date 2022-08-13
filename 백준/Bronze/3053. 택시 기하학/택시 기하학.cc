#include <iostream>

using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	double radius;

	cin >> radius;


	cout.precision(15);
	cout << radius * radius * 3.14159265358979 << "\n";
	cout << radius * radius * 2;
}