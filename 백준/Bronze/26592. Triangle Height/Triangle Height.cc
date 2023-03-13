#include <iostream>

using namespace std;

int main() {
	cout << fixed;
	cout.precision(2);

	int num;
	cin >> num;

	for (int i=0; i<num; i++) {
		double s, h;
		cin >> s >> h;
		cout << "The height of the triangle is " << s/h*2 << " units\n";
	}
}