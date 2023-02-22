#include <iostream>
using namespace std;

int main() {
    string str;
    cin >> str;
    
    for (char c:str) {
        switch (c) {
			case 'a':
				cout << '4';
				break;
			case 'e':
				cout << '3';
				break;
			case 'i':
				cout << '1';
				break;
			case 'o':
				cout << '0';
				break;
			case 's':
				cout << '5';
				break;
			default:
				cout << c;
				break;
        }
    }
}