#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n, r = -1;
	cin >> n;

	vector<int> words(51, 0);

	for (int i=0, w; i<n; i++) {
		cin >> w;
		words[w]++;
	}

	for (int i=50; i>=0; i--) {
		if (words[i] == i) {
			r = i;
			break;
		}
	}

	cout << r;
}