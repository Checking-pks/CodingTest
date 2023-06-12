#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int price, num, faceValue;
	
	cin >> price >> num;

	faceValue = pow(10, num);
	price = round(1.0 * price / faceValue) * faceValue;

	cout << price;
}