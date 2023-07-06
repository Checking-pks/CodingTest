#include <iostream>

using namespace std;

int main() {
	int result = 0;
	string str;
	cin >> str;

	for (char c:str) {
		switch(c) {
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
				result++;
		}
	}

	cout << result;
}