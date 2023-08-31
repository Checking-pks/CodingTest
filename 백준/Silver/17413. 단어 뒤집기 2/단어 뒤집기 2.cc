#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	string str;
	getline(cin, str);

	bool isTag = false;
	string reverseStr = "";

	for (int i=0; i<str.length(); i++) {
		if (str[i] == '<') {
			isTag = true;
			reverse(reverseStr.begin(), reverseStr.end());
			cout << reverseStr;
			reverseStr = "";
		}

		if (isTag) {
			cout << str[i];
			if (str[i] == '>') isTag = false;
		} else if (str[i] == ' ') {
			reverse(reverseStr.begin(), reverseStr.end());
			cout << reverseStr << str[i];
			reverseStr = "";
		} else {
			reverseStr += str[i];
		}
	}

	reverse(reverseStr.begin(), reverseStr.end());
	cout << reverseStr;
}