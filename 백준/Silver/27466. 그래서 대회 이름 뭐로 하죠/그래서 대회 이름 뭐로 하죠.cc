#include <iostream>

using namespace std;

int main() {
	int strLength, resultLength;
	string str, result = "";
	cin >> strLength >> resultLength;
	cin >> str;

	bool setBack = false;
	
	for (int i=strLength-1, aaCount=0; i>=0; i--) {
		if (!setBack) {
			switch(str[i]) {
				case 'A':
				case 'E':
				case 'I':
				case 'O':
				case 'U':
					break;
				default:
					result = str[i];
					setBack = true;
			}
		} else if (aaCount < 2) {
			if (str[i] == 'A') {
				result = 'A' + result;
				aaCount++;
			}
		} else {
			int remind = resultLength - result.length();
			result = str.substr(i-remind+1, remind) + result;
			break;
		}
	}

	if (result.length() == resultLength) 
		cout << "YES" << "\n" << result;
	else 
		cout << "NO";
}