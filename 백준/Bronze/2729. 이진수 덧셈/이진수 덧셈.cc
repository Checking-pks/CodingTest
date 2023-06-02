#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int testcase;
	cin >> testcase;

	while (testcase--) {
		int u=0;
		string n1, n2, result = "";
		cin >> n1 >> n2;

		reverse(n1.begin(), n1.end());
		reverse(n2.begin(), n2.end());

		while (n1.length() < n2.length()) n1 += '0';
		while (n1.length() > n2.length()) n2 += '0';
		
		for (int i=0; i<n1.length(); i++) {
			int nowVal = n1[i] - '0' + n2[i] - '0' + u;
			u = nowVal/2;

			result += to_string(nowVal % 2);
		}

		if (u) result += to_string(u);

		reverse(result.begin(), result.end());

		int isZero=0;
		
		for (int i=0; i<result.length(); i++) {
			if (!isZero)
				isZero = result[i] - '0';

			if (isZero)
				cout << result[i];
		}

		if (!isZero) cout << "0";

		cout << "\n";
	}
}