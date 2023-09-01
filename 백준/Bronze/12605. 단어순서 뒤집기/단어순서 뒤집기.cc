#include <iostream>

using namespace std;

int main() {
	int testcase;
	cin >> testcase;

	cin.ignore();

	for (int i=1; i<=testcase; i++) {
		string str, result = "";
		getline(cin, str);

		int pos = 0, next = str.find(' ', pos);

		while (next != string::npos) {
			result = str.substr(pos, next - pos) + " " + result;
			
			pos = next + 1;
			next = str.find(' ', pos);
		}

		result = str.substr(pos) + (pos ? " " + result : "");

		cout << "Case #" << i << ": " << result << "\n";
	}
}