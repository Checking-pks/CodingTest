#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int testcase;
	cin >> testcase;
	cin.ignore();

	while (testcase--) {
		int result = 0;
		string str;
		getline(cin, str);

		for (int i=0; i<str.length(); i++) {
			switch (str[i]) {
				case 'I':
					result += 1;
					break;
				case 'V':
					result += 5;
					break;
				case 'X':
					result += 10;
					break;
				case 'L':
					result += 50;
					break;
				case 'C':
					result += 100;
					break;
				case 'D':
					result += 500;
					break;
				case 'M':
					result += 1000;
					break;
				default:
					break;
			}
		}

		cout << result << "\n";
	}
}