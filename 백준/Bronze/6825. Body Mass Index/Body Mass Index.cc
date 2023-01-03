#include <iostream>

using namespace std;

int main() {
	double weight, height, bmi;
	cin >> weight >> height;

	bmi = weight / (height * height);

	if (bmi >= 25)
		cout << "Overweight";
	else if (bmi < 18.5)
		cout << "Underweight";
	else
		cout << "Normal weight";
}