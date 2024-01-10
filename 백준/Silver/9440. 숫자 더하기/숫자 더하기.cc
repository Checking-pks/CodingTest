#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int n;
	cin >> n;

	while (n) {
		string n1 = "", n2 = "";
		vector<char> numList(n);
		for (int i=0; i<n; i++)
			cin >> numList[i];

		sort(numList.begin(), numList.end());

		for (int i=0; i<n; i++) {
			char now = numList[i];

			if (i&1) {
				if (n1.front() == '0')
					n1 = now + n1;
				else
					n1 += now;
			} else {
				if (n2.front() == '0')
					n2 = now + n2;
				else
					n2 += now;
			}
		}

		int result = stoi(n1) + stoi(n2);
		swap(n1[0], n2[0]);
		result = min(result, stoi(n1) + stoi(n2));

		cout << result << "\n";
		cin >> n;
	}
}