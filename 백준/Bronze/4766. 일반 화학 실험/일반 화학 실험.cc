#include <iostream>

using namespace std;

int main() {
	cout << fixed;
	cout.precision(2);
	
	double prevTemp, nowTemp = 0;
	cin >> prevTemp >> nowTemp;

	while (nowTemp != 999) {
		cout << nowTemp - prevTemp << "\n";
		prevTemp = nowTemp;
		cin >> nowTemp;
	}
}