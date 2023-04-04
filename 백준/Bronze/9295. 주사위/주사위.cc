#include <iostream>

using namespace std;

int main() {
	int num;
	cin >> num;

	for (int i=1, n1, n2; i<=num; i++) {
		cout << "Case " << i <<": ";
		cin >> n1 >> n2;
		cout << n1 + n2 << "\n";
	}
}