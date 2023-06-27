#include <iostream>

using namespace std;

int main() {
	string str;
	cin >> str;

	while (str != "#") {
		string result = "";

		for (char c:str) {
			if (c == 'b') result = 'd' + result;
			else if (c == 'd') result = 'b' + result;
			else if (c == 'p') result = 'q' + result;
			else if (c == 'q') result = 'p' + result;
			else if (c == 'i') result = 'i' + result;
			else if (c == 'o') result = 'o' + result;
			else if (c == 'v') result = 'v' + result;
			else if (c == 'w') result = 'w' + result;
			else if (c == 'x') result = 'x' + result;
			else {
				result = "INVALID";
				break;
			}
		}

		cout << result << "\n";
		cin >> str;
	}
}