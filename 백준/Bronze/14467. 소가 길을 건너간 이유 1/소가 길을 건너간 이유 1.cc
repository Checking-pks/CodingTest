#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n, result=0;
	cin >> n;
	vector<int> cow(11, -1);

	for (int i=0, nowC, nowR; i<n; i++) {
		cin >> nowC >> nowR;

		result += (cow[nowC] != -1 && cow[nowC] != nowR);
		cow[nowC] = nowR;
	}

	cout << result;
}