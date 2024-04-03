#include <iostream>

using namespace std;

void getSolution(int &n, int &m) {
	int A, B, C;
	cin >> A >> B >> C;

	n = 101, m = 101;

	if (A == 0) return;

	for (int i=-100; i<=100; i++) {
		if (A * i * i + B * i + C == 0) {
			n = i;
			break;
		}
	}

	for (int i=-100; i<=100; i++) {
		if (i == n) continue;
		if (A * i * i + B * i + C == 0) {
			m = i;
			break;
		}
	}
}

bool isSquare(int n) {
	for (int i=2; i<=n; i<<=1) 
		if (i == n)
			return true;
	return false;
}

int main() {
	int n, m;
	getSolution(n, m);

	if (n == 101 || m == 101)
		cout << "둘다틀렸근";
	else if (isSquare(n) && isSquare(m))
		cout << "이수근";
	else
		cout << "정수근";
}