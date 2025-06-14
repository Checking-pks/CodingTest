#include <iostream>

using namespace std;

int main() {
	cout << fixed;
	cout.precision(2);

	int num;
	float p1, w1, result;
	
	cin >> p1 >> w1 >> num;

	result = 1000 * p1 / w1;

	for (int i=0; i<num; i++) {
		float p, w, now;
		
		cin >> p >> w;

		now = 1000 * p / w;

		if (result > now)
			result = now;
	}

	cout << result;
}