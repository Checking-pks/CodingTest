#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	string n1, n2, result = "";
	cin >> n1 >> n2;

	reverse(n1.begin(), n1.end());
	reverse(n2.begin(), n2.end());

	for (int i=0; i<max(n1.length(), n2.length()); i++) {
		int num1 = (i < n1.length() ? n1[i] - '0' : 0);
		int num2 = (i < n2.length() ? n2[i] - '0' : 0);

		result = to_string(num1 + num2) + result; 
	}

	cout << result;
}