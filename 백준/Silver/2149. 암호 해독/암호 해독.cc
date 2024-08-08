#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	string key;
	string ciphertext;

	cin >> key >> ciphertext;

	int len = key.length();
	int cipherLen = ciphertext.length() / len;
	
	vector<pair<char, int>> keyList(len);
	for (int i=0; i<len; i++) 
		keyList[i] = {key[i], i};

	sort(keyList.begin(), keyList.end());

	vector<string> cipherList;
	for (int i=0; i<ciphertext.length(); i+=cipherLen) 
		cipherList.push_back(ciphertext.substr(i, cipherLen));
	
	for (int i=0; i<cipherLen; i++) {
		string now(len, 'A');
		for (int j=0; j<len; j++) 
			now[keyList[j].second] = cipherList[j][i];

		cout << now;
	}
}