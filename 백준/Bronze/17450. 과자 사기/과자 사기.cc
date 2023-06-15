#include <iostream>

using namespace std;

int main() {
	int idx;
	double maxCost = 0;
	

	for (int i=0; i<3; i++) {
		double price, weight;
		cin >> price >> weight;

		double nowResult = (weight * 10) / (price * 10 - (price >= 500 ? 500 : 0));

		if (maxCost < nowResult) {
			maxCost = nowResult;
			idx = i;
		}
	}

	cout << "SNU"[idx];
}