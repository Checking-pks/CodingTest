#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int num, result = 0;
	cin >> num;

	for (int i=0, nowMilk = 0; i<num; i++) {
		int store;
		cin >> store;

		if (store == nowMilk%3) {
			result++;
			nowMilk++;
		}
	}

	cout << result;
}