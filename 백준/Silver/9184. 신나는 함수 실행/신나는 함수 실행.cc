#include <iostream>
#include <vector>
#include <map>

using namespace std;

map<vector<int>, int> numList;

int w(int a, int b, int c) {
	if (a<=0 || b<=0 || c<=0)
		return 1;
	if (numList.find({a, b, c}) != numList.end())
		return numList[{a, b, c}];

	int now=0;
	
	if (a>20 || b>20 || c>20)
		now = w(20, 20, 20);
	else if (a<b && b<c)
		now = w(a, b, c-1) + w(a, b-1, c-1) - w(a, b-1, c);
	else
		now = w(a-1, b, c) + w(a-1, b-1, c) + w(a-1, b, c-1) - w(a-1, b-1, c-1);

	numList[{a, b, c}] = now;
	return now;
}

int main() {
	int a, b, c;
	cin >> a >> b >> c;

	while (a!=-1 || b!=-1 || c!=-1) {
		cout << "w(" << a << ", " << b << ", " << c << ") = " << w(a, b, c) << "\n";
		cin >> a >> b >> c;
	}
}