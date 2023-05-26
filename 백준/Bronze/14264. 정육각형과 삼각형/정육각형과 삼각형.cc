#include <iostream>
#include <cmath>

using namespace std;

int main() {
	cout << fixed;
	cout.precision(10);
	
	double num;
	cin >> num;
	cout << (num / 2) * (num * sqrt(3) / 2);
}