#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	vector<int> num = {0, 0, 0};
	cin >> num[0] >> num[1] >> num[2];

	sort(num.begin(), num.end());

	if (num[0] + num[1] == num[2]) cout << 1;
	else if (num[0] * num[1] == num[2]) cout << 2;
	else cout << 3;
}