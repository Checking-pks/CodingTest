#include <iostream>

using namespace std;

int main() {
	int n, result = 1;
	cin >> n;

	for (int i=1; true; i++) {
		for (int j=0; j<2; j++) {
			result += i;
			
			if (!--n) {
				cout << result;
				return 0;
			}

			if (i == 1) break;
		}
	}
}