#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n, result=0;
	cin >> n;

	vector<char> charList(n);

	for (int i=0; i<n; i++)
		cin >> charList[i];

	for (int i=0; i<n; i++) {
		char c;
		cin >> c;
		result += (c == charList[i]);
	}

	cout << result;
}