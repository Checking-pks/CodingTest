#include <iostream>

using namespace std;

int Rev(int num) {
	int result = 0;
	while (num) {
		result *= 10;
		result += num % 10;
		num /= 10;
	}

	return result;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n1, n2;
	cin >> n1 >> n2;
	cout << Rev(Rev(n1) + Rev(n2));
}