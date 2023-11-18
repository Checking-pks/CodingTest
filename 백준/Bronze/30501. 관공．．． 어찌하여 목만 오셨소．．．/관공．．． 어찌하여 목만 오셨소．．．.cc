#include <iostream>

using namespace std;


int main() {
	int n;
	cin >> n;
	string result = "";

	for (int i=0; i<n; i++) {
		string s;
		cin >> s;

		if (result == "") {
			for (char c:s) {
				if (c == 'S') {
					result = s;
					break;
				}
			}
		}
	}

	cout << result;
}