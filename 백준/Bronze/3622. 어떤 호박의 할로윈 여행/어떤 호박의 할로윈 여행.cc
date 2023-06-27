#include <iostream>

using namespace std;

int main() {
	bool result = false;
	int A, a, B, b, P;
	cin >> A >> a >> B >> b >> P;

	if (P >= B && b >= A) result = true;
	if (P >= A && a >= B) result = true;
	if (P >= A + B) result = true;
	
	cout << (result ? "Yes" : "No");
}