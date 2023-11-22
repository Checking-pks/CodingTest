#include <iostream>

using namespace std;

int main() {
	int n, x, k;
	cin >> n >> x >> k;

	for (int i=0, a, b; i<k; i++) {
		cin >> a >> b;
		if (x==a) x=b;
		else if (x==b) x=a;
	}

	cout << x;
}