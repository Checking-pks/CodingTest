#include <iostream>
#include <cmath>
using namespace std;


int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int min, max, sum = 0, minnum = 10001;
	cin >> min >> max;
	
	int list[10000] = {0,};

	for (int i = 0; i <= max - min; i++) {
		list[i] = min + i;

		for (int j = 2; j < int(sqrt(list[i])) + 1; j++) {
			if (list[i] % j == 0) {
				list[i] = 0;
				break;
			}
		}
		
		if (list[i] == 1) {
			list[i] = 0;
		}
		else if (list[i] != 0) {
			cout << list[i] << "\n";
		}

	}

}