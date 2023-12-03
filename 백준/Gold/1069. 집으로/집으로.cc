#include <iostream>
#include <cmath>

using namespace std;

int main() {
	cout.precision(9);
	cout << fixed;
	
	double X, Y, D, T;
	cin >> X >> Y >> D >> T;

	double result=0, distance = sqrt(X*X+Y*Y);

	if (D < T) {
		cout << distance;
		return 0;
	}

	result = distance;

	int jumpTimes = distance / D;
	distance -= jumpTimes * D;

	if (jumpTimes == 0) result = min(result, min(T+D-distance, 2.0 * T));
	else result = min(result, min(jumpTimes * T + distance, (jumpTimes + 1) * T));

	cout << result;
}