#include <iostream>

using namespace std;

int main() {
	int e, f, c, result=0;
	cin >> e >> f >> c;

	e += f;

	while (e/c) {
		result += e/c;
		f = e/c;
		e %= c;
		e += f;
	}
	

	cout << result;
}