#include <iostream>

using namespace std;

int main() {
	int max = 0;

	for (int i=0, now=0; i<10; i++) {
		int out, in;
		cin >> out >> in;

		now += in - out;

		if (max < now)
			max = now;
	}

	cout << max;
}