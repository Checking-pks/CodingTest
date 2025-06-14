#include <iostream>

using namespace std;

int main() {
	cout << fixed;
	cout.precision(2);

	const double pi = 3.1415927;
	
	int n = 0;
	double diameter, rotations, time;

	cin >> diameter >> rotations >> time;

	while (rotations) {
		cout << "Trip #" << ++n << ": "
			<< diameter * pi * rotations / 12 / 5280 << " "
			<< diameter * pi * rotations / 12 / 5280 / (time / 60 / 60) << "\n";

		cin >> diameter >> rotations >> time;
	}
}