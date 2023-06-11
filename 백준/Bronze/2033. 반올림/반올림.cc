#include <iostream>

using namespace std;

int main() {
	int num;
    cin >> num;

	for (int i=10; i<num; i*=10) {
		if (num % i >= 0.5f * i) 
			num += i;

		num -= num % i;
	}

	cout << num;
}