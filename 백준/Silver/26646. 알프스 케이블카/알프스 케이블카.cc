#include <iostream>

using namespace std;

int main() {
	int N, last, result=0;
	cin >> N >> last;

	for (int i=1, now; i<N; i++) {
		cin >> now;
		result += 2*last*last + 2*now*now;
		last = now;
	}

	cout << result;
}