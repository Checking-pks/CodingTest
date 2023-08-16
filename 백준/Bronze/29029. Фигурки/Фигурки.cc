#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
	int num;
	string str;
	cin >> num >> str;

	unordered_map<char, int> charList = {{'N', 0}, {'S', 0}, {'W', 0}, {'E', 0}};

	int maxNum = 0;

	for (int i=0; i<str.size(); i++) {
		charList[str[i]]++;
		maxNum = max(maxNum, charList[str[i]]);
	}

	cout << num - maxNum;
}