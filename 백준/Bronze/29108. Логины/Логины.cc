#include <iostream>

using namespace std;

int main() {
	string str;
	cin >> str;

	bool result = (str.substr(0, 2) == "io");
	
	if (str.size() < 3) result = false;

	for (int i=2; i<str.size(); i++)
		if ('0' > str[i] || str[i] > '9')
			result = false;

	cout << (result ? "Correct" : "Incorrect");
}