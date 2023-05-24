#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	int pact[5] = {1, 2, 6, 24, 120};
	int num;
	cin >> num;

	while (num != 0) {
		int result = 0;

		for (int i=0; num; num/=10) 
			result += num % 10 * pact[i++];

		cout << result << "\n";
		cin >> num;
	}
}