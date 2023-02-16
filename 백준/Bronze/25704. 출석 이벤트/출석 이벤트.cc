#include <iostream>

using namespace std;

int main() {
    int stamp, price, min;
	cin >> stamp >> price;

	min = price;

	if (stamp>=5) min -= 500;
	if (stamp>=10 && min>price*0.9) min = price*0.9;
	if (stamp>=15 && min>price-2000) min = price-2000;
	if (stamp>=20 && min>price*0.75) min = price*0.75;

	cout << (min > 0 ? min : 0);
}