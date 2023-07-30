#include <iostream>

using namespace std;

int main() {
	int result = 0;
	int price[4] = {0,};
	int parking[101] = {0,};
	cin >> price[1] >> price[2] >> price[3];

	for (int i=0, in, out; i<3; i++) {
		cin >> in >> out;

		for (int j=in+1; j<=out; j++) {
			parking[j]++;
		}
	}

	for (int i=1; i<=100; i++) {
		result += price[parking[i]] * parking[i];
	}

	cout << result;
}