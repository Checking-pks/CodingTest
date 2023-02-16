#include <iostream>

using namespace std;

int main() {
    int testcase;
	cin >> testcase;

	for (int i=0; i<testcase; i++) {
		int a, b, c, min=60;
		cin >> a >> b >> c;

		if (min>a) min=a;
		if (min>b) min=b;
		if (min>c) min=c;

		cout << min << "\n";
	}
}