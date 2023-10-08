#include <iostream>

using namespace std;

int main() {
	int n, price;
	cin >> n >> price;

	int total=0, bedroom=0;
	double priceSpace=0;

	for (int i=0; i<n; i++) {
		int now;
		string room;
		cin >> now >> room;

		total += now;
		bedroom += now * (room == "bedroom");
		priceSpace += now * (room == "balcony" ? 0.5f : 1);
	}

	cout << total << "\n"
		<< bedroom << "\n";

	cout.precision(priceSpace*price != (int)(priceSpace*price));
	cout << fixed;
	cout << priceSpace*price;
}