#include <iostream>
#include <string>

using namespace std;

int charToNum(char c) {
	if (c >= '0' && c <= '9') return c - '0';
	return c - 'A' + 10;
}

int main() {
    int result = 0;
    string str;
    cin >> str;
    
    for (int i=1; str.length(); i*=16) {
        result += charToNum(str.back()) * i;
		str.pop_back();
    }

	cout << result;
}