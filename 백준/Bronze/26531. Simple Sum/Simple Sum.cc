#include <iostream>

using namespace std;

int main() {
    int n1, n2, result;
	char sign;

	cin >> n1 >> sign >> n2 >> sign >> result;
	cout << (n1+n2==result?"YES":"NO");
}