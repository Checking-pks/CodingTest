#include <iostream>
#include <cmath>
using namespace std;


int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n, num = 0;
	cin >> n;
	
	int list[123457] = {0,};

	while (n != 0) {
		for (int i = 1; i <= n; i++) {
			list[i] = n + i;

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
				num++;
			}

		}

		cout << num << "\n";
		cin >> n;
		num = 0;
	}
}