#include <iostream>

using namespace std;

int main() {
	int n, hour=0;
	cin >> n;

	for (int i=0, study; i<n; i++) {
		cin >> study;
		hour += study + (i!=0) * 8;
	}

	cout << hour/24 << " " << hour%24;
}