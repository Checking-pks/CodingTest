#include <iostream>

using namespace std;

int main() {
	int N;
	cin >> N;

	string result = "ZZZ";

	for (int i=0; i<N; i++) {
		string now;
		cin >> now;

		if (now.length() != 3)
			continue;

		result = min(result, now);
	}

	cout << result;
}