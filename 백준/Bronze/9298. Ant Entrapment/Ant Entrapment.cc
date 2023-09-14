#include <iostream>

using namespace std;

int main() 
{
	cout << fixed;
	cout.precision(10);
	
	int testcase;
	cin >> testcase;

	for (int i=1, num; i<=testcase; i++) {
		cin >> num;

		pair<double, double> x = {1001, -1001}, y = {1001, -1001};

		for (int j=0; j<num; j++) {
			double nowX, nowY;
			cin >> nowX >> nowY;

			x.first = min(x.first, nowX);
			x.second = max(x.second, nowX);

			y.first = min(y.first, nowY);
			y.second = max(y.second, nowY);
		}
		
		cout << "Case " << i << ": ";
		cout << "Area " << (x.second - x.first) * (y.second - y.first) << ", ";
		cout << "Perimeter " << ((x.second - x.first) + (y.second - y.first))*2 << "\n";
	}
}