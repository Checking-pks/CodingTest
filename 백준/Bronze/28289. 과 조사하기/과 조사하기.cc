#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<int> result(4, 0);
	int num;
	cin >> num;

	for (int i=0; i<num; i++) {
		int g, c, n;
		cin >> g >> c >> n;

		if (g == 1) {
			result[3]++;
			continue;
		}

		if (c == 1 || c == 2) result[0]++;
		if (c == 3) result[1]++;
		if (c == 4) result[2]++;
	}

	for (int n:result)
		cout << n << "\n";
}