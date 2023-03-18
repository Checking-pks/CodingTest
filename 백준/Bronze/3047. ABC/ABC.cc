#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	vector<int> num(3, 0);
	string order;

	cin >> num[0] >> num[1] >> num[2] >> order;

	sort(num.begin(), num.end());

	for (char c:order) cout << num[c - 'A'] << " ";
}