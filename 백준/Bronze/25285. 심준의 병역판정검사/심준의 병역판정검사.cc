#include <iostream>

using namespace std;

int main() {
	int num;
	cin >> num;

	for (int i=0; i<num; i++) {
		float height, weight;
		cin >> height >> weight;

		float bmi = weight / (height * 0.01) / (height * 0.01);

		if (height < 140.1) {
			cout << 6;
		} else if (height < 146) {
			cout << 5;
		} else if (height < 159) {
			cout << 4;
		} else if (height < 161) {
			if (16 <= bmi && bmi < 35) 
				cout << 3;
			else 
				cout << 4;
		} else if (height < 204) {
			if (20 <= bmi && bmi < 25) 
				cout << 1;
			else if ((18.5 <= bmi && bmi < 20) || (25 <= bmi && bmi < 30))
				cout << 2;
			else if ((16 <= bmi && bmi < 18.5) || (30 <= bmi && bmi < 35))
				cout << 3;
			else
				cout << 4;
		} else {
			cout << 4;
		}

		cout << "\n";
	}
}