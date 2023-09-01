#include <iostream>

using namespace std;

int main() {
	string str;
	
	while(getline(cin, str)) {
		bool isString = false;

		while (str.find("BUG") != string::npos) 
			str.erase(str.find("BUG"), 3);

		cout << str << "\n";
	}
}