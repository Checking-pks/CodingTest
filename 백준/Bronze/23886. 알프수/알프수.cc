#include <iostream>

using namespace std;

bool isAlpsoo(string X) {
	int len = X.length();

	if (X[0] > X[1] || X[len - 2] < X[len - 1])
		return false;

	for (int i = 0; i < len - 1; i++)
		if (X[i] == X[i + 1])
			return false;

	return true;
}

int main() {
	string X;
	cin >> X;

	cout << (isAlpsoo(X) ? "" : "NON ") << "ALPSOO";
}