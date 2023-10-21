#include <iostream>

using namespace std;

int oper(int n1, char o, int n2) {
	switch (o) {
		case '*':
			n1 *= n2;
			break;
		case '/':
			n1 /= n2;
			break;
		case '+':
			n1 += n2;
			break;
		case '-':
			n1 -= n2;
			break;
	}

	return n1;
}

int main() {
	int k1, k2, k3;
	char o1, o2;
	cin >> k1 >> o1 >> k2 >> o2 >> k3;

	int v1 = k1, v2 = k2;

	v1 = oper(v1, o1, k2);
	v1 = oper(v1, o2, k3);

	v2 = oper(v2, o2, k3);
	v2 = oper(k1, o1, v2);

	cout << min(v1, v2) << "\n" << max(v1, v2);
}