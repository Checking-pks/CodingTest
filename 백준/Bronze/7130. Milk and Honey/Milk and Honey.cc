#include <iostream>

using namespace std;

int main() {
	int m, h, n, result=0;
	cin >> m >> h >> n;

	for (int i=0, nowM, nowH; i<n; i++) {
		cin >> nowM >> nowH;
		result += (nowM * m > nowH * h ? nowM * m : nowH * h);
	}

	cout << result;
}