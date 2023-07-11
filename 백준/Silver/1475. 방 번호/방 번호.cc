#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
	int result = 0;
	string num;
	cin >> num;

	vector<int> count(9, 0);

	for (int i=0; i<num.length(); i++) {
		if (num[i] == '9') count[6]++;
		else count[num[i] - '0']++;
	}

	for (int i=0; i<count.size(); i++) {
		if (i == 6) result = max(result, int(ceil(count[i]/2.f)));
		else result = max(result, count[i]);
	}

	cout << result;
}