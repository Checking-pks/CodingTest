#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	int num;
	cin >> num;

	while (num) {
		int result = 0;

		for (int i=1; i<=num; i++)
			result += i * i;

		cout << result << "\n";
		cin >> num;
	}
}