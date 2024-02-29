#include <iostream>

using namespace std;

string getStrKey(string target, string diff) {
	for (int i=0; i<target.length(); i++) 
		target[i] = char(((target[i] - diff[i]) + 26) % 26 + 'a');
	
	return target;
}

int isKey(string s) {
	for (int i=1; i<=s.length()/2; i++) {
		bool isKey = true;
		for (int j=i; isKey && j<s.length(); j++)
			if (s[j] != s[j-i]) 
				isKey = false;

		if (isKey) return i;
	}

	return 0;
}

string keyProcessing(int strLength, int pos, string key) {
	string result(strLength, ' ');

	for (int i=pos, j=0; i<strLength; i++, j++) 
		result[i] = key[j%key.length()];

	for (int i=pos, j=0; i>=0; i--, j+=key.length()-1)
		result[i] = key[j%key.length()];
	
	return result;
}

int main() {
	string strAfter, strBeforePart;
	cin >> strAfter >> strBeforePart;

	int afterLen = strAfter.length();
	int partLen = strBeforePart.length();
	string key;

	for (int i=0; i<=afterLen - partLen; i++) {
		string candidate = getStrKey(strAfter.substr(i, partLen), strBeforePart);
		int keyLength = isKey(candidate);

		if (!keyLength) continue;

		key = candidate.substr(0, keyLength);
		key = keyProcessing(afterLen, i, key);
		break;
	}

	cout << getStrKey(strAfter, key);
}