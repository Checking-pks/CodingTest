#include <iostream>

using namespace std;

int main() {
	string str, list;
	cin >> str;
	cin.ignore();
	getline(cin, list);

	for (int i=0; i<list.size(); i+=2) 
		for (int j=0; j<str.length(); j++)
			if (str[j] == list[i])
				str[j] += 32;

	cout << str;
}