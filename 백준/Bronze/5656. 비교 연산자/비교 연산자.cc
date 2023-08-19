#include <iostream>

using namespace std;

int main() {
	int n1, n2;
	string compare;

	cin >> n1 >> compare >> n2;

	for (int i=1; compare != "E"; i++) {
		cout << "Case " << i << ": ";

		if (compare == ">")  cout << (n1 >  n2 ? "true" : "false");
		if (compare == ">=") cout << (n1 >= n2 ? "true" : "false");
		if (compare == "<")  cout << (n1 <  n2 ? "true" : "false");
		if (compare == "<=") cout << (n1 <= n2 ? "true" : "false");
		if (compare == "==") cout << (n1 == n2 ? "true" : "false");
		if (compare == "!=") cout << (n1 != n2 ? "true" : "false");

		cout << "\n";
		
		cin >> n1 >> compare >> n2;
	}
}