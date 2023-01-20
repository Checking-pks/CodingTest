#include <iostream>

using namespace std;

int main() {
	int x1, x2, x3, x4;
	int y1, y2, y3, y4;
	int length;

	cin >> x1 >> y1 >> x2 >> y2;
	cin >> x3 >> y3 >> x4 >> y4;
	
	x1 = (x1 < x3 ? x1 : x3);
	x2 = (x2 > x4 ? x2 : x4);
	y1 = (y1 < y3 ? y1 : y3);
	y2 = (y2 > y4 ? y2 : y4);

	length = ((x2 - x1 > y2 - y1) ? x2 - x1 : y2 - y1);

	cout << length * length;
}