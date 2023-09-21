#include <iostream>
#include <map>

using namespace std;

int main() {
	map<int, int> info = {
		{136, 1000}, {142, 5000}, {148, 10000}, {154, 50000}
	};

	int n, sum = 0;
	cin >> n;

	while(n--) {
		int r, c;
		cin >> r >> c;
		sum += info[r];
	}

	cout << sum;
}