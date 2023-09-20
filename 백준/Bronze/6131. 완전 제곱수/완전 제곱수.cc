#include <iostream>

using namespace std;

int main() {
	int n, result=0;
	cin >> n;

	for (int i=1; i<=500; i++) {
		for (int j=1; j<=500; j++) {
			result += (i*i == j*j + n);
		}
	}

	cout << result;
}