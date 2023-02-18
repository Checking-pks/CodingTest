#include <iostream>

using namespace std;

int main() {
	int chicken, a, b, c, result = 0;
	cin >> chicken >> a >> b >> c;

	result += (chicken<a) ? chicken : a;
	result += (chicken<b) ? chicken : b;
	result += (chicken<c) ? chicken : c;

	cout << result;
}