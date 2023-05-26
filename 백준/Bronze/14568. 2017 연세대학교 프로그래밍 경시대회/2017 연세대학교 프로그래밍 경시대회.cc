#include <iostream>

using namespace std;

int main() {
	int num, result = 0;
	cin >> num;

	for (int i=1; i<num; i++) {
		for (int j=1; j<num; j++) {
			for (int k=1; k<num; k++) {
				if (i+j+k != num) continue;
				if (i & 1) continue;
				if (k-j < 2) continue;
				result++;
			}
		}
	}

	cout << result;
}