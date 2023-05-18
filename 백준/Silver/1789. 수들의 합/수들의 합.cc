#include <iostream>

using namespace std;

int main() {
	long long sum, result = 1;
	cin >> sum;

	while (result * (result+1) / 2 <= sum)
		result++;

	cout << result - 1;
}