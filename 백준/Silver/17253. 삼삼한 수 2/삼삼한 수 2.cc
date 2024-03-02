#include <iostream>

using namespace std;

int main() {
	long long N;
	cin >> N;

	if (!N) {
		cout << "NO";
		return 0;
	} 

	bool isCan = true;
	while (N) {
		if (N % 3 > 1) {
			isCan = false;
			break;
		}

		N /= 3;
	}

	cout << (isCan ? "YES" : "NO");
}