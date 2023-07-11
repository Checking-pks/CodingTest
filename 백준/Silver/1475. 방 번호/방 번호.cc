#include <iostream>
#include <vector>

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
		if (i == 6) result = max(result, count[i]/2 + count[i]%2);
		else result = max(result, count[i]);
	}

	cout << result;
}