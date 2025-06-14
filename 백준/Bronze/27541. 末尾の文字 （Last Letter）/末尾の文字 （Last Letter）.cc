#include <iostream>

using namespace std;

int main() {
	int length;
    string str;
	cin >> length >> str;

	if (str.back() == 'G')
		str.pop_back();
	else
		str += 'G';

	cout << str;
}