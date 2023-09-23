#include <iostream>

using namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	for (int i=0, now; i<k; i++) {
		cin >> now;
		now = now * 100 / n;

		int result=0;
		result += (now >= 0);
		result += (now > 4);
		result += (now > 11);
		result += (now > 23);
		result += (now > 40);
		result += (now > 60);
		result += (now > 77);
		result += (now > 89);
		result += (now > 96);

		cout << result << " ";
	}
}