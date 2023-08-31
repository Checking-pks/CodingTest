#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int testcase;
	cin >> testcase;

	while (testcase--) {
		string str, result;
		cin >> str;
		result = str;

		if (next_permutation(result.begin(), result.end()))
			cout << result << "\n";
		else
			cout << "BIGGEST\n";
	}
}