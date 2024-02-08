#include <iostream>

using namespace std;

int main() {
	int N;
	cin >> N;

	long long sum=0, maximum=0;
	while (N--) {
		long long now;
		cin >> now;
		sum += now;
		maximum = max(maximum, now);
	}

	if (sum != 1 && sum/2 < maximum)
		cout << "Unhappy";
	else
		cout << "Happy";
}