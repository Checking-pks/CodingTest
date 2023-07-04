#include <iostream>

using namespace std;

int main() {
	int lastNum = -1000001;
	string str, nowNum = "", result = "Good";
	getline(cin, str);

	for (int i=0; i<str.length(); i++) {
		if (str[i] == ' ') {
			if (lastNum <= stoi(nowNum)) {
				lastNum = stoi(nowNum);
				nowNum = "";
			} else {
				result = "Bad";
				break;
			}
		} else {
			nowNum = nowNum + str[i];
		}
	}

	if (lastNum > stoi(nowNum))
		result = "Bad";

	cout << result;
}