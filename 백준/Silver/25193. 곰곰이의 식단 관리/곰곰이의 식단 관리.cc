#include <iostream>

using namespace std;

int main() {
	int N;
	cin >> N;

	string S;
	cin >> S;

	int c = 0, n = 1;
	for (int i=0; i<N; i++) {
		if (S[i] == 'C')
			c++;
		else
			n++;
	}

	cout << (c ? c / n + (c % n != 0) : 0);
}