#include <iostream>

using namespace std;

int main() {
    string str;
    cin >> str;

	if (str.length() == 4)
		cout << 20;
    else if (str.length() == 3) 
        cout << 10 + (str[1] == '0' ? str[2] - '0' : str[0] - '0');
    else 
        cout << str[0] - '0' + str[1] - '0';
}