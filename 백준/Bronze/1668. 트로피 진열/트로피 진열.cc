#include <iostream>
#include <vector>
using namespace std;

int main() {
	int c, l=0, r=0;
	cin >> c;

	vector<int> h(c);

	while (c) cin >> h[--c];

	for (int i=0, max=0; i<h.size(); i++) {
		if (max < h[i]) {
			max = h[i];
			r++;
		}
	}

	for (int i=h.size()-1, max=0; i>=0; i--) {
		if (max < h[i]) {
			max = h[i];
			l++;
		}
	}

	cout << l << "\n" << r;
}