#include <iostream>

using namespace std;

int main() {
	int testcase;
	cin >> testcase;

	while (testcase--) {
		int left, right, result = 0;
		cin >> left >> right;

		for (int i=left; i<=right; i++) {
			string str = to_string(i);

			for (int j=0; j<str.length(); j++)
				if (str[j] == '0') result++;
		}

		cout << result << "\n";
	}
}