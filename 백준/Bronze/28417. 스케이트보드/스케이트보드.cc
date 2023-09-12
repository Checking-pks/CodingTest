#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int num, result=0;
	cin >> num;

	for (int i=0; i<num; i++) {
		vector<int> r(2, 0);
		vector<int> t(5, 0);

		for (int j=0; j<2; j++) cin >> r[j];
		for (int j=0; j<5; j++) cin >> t[j];

		sort(r.begin(), r.end(), greater<>());
		sort(t.begin(), t.end(), greater<>());

		result = max(result, r[0] + t[0] + t[1]);
	}

	cout << result;
}