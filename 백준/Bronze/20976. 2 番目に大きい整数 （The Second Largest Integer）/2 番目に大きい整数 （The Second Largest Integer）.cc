#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	vector<int> n = {0, 0, 0};
	cin >> n[0] >> n[1] >> n[2];

	sort(n.begin(), n.end());
	cout << n[1];
}