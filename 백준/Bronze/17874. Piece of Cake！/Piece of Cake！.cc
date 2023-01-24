#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int n, h, v;
	cin >> n >> h >> v;

	if (h < n - h) h = n - h;
	if (v < n - v) v = n - v;
	
	cout << h*v*4;
}