#include <iostream>
#include <cmath>

using namespace std;

int main(){
	double x, y, c;
	cin >> x >> y >> c;
	
	double l = 0.0, r = min(x, y);
	double mid = 0.5*(l+r);

	while (r-l > 1e-5)
	{
		mid = 0.5*(l+r);
		if (c/sqrt(x*x-mid*mid) + c/sqrt(y*y-mid*mid) < 1.0)
			l = mid;
		else
			r = mid;
	}

	cout << mid;
}