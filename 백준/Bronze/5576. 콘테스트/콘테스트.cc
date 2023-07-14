#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	vector<int> w(10), k(10);

	for (int i=0; i<10; i++) cin >> w[i];
	for (int i=0; i<10; i++) cin >> k[i];

	sort(w.begin(), w.end(), greater<>());
	sort(k.begin(), k.end(), greater<>());

	cout << w[0] + w[1] + w[2] << " "
		<< k[0] + k[1] + k[2];
}