#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int num;
	int fiveNum=0;
	cin >> num;

	for (int i=2; i<=num; i++) {
		int num = i;

		while (num % 5 == 0) {
			fiveNum++;
			num /= 5;
		}
	}

	cout << fiveNum;
	
	return 0;
}