#include <iostream>

using namespace std;

int main() {
	long long N, M, X = 0, Y = 0;
	cin >> N >> M;

	string S, T;
	cin >> S >> T;

	for (int i = 0, pos = 0; i < S.length(); i++) {
		if (S[i] == '0') continue;

		while (T[pos] == '0') pos++;

		X += abs(pos++ - i);
	}

	Y = X / 2;
	X -= Y;

	cout << X * X + Y * Y;
}