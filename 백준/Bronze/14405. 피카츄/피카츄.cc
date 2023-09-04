#include <iostream>

using namespace std;

int main() {
	string s;
	cin >> s;
	
	bool result = true;	
	
	for (int i=0; i<s.length(); i++) {
		if (s.substr(i, 2) == "pi")
			i += 1;
		else if (s.substr(i, 2) == "ka")
			i += 1;
		else if (s.substr(i, 3) == "chu")
			i += 2;
		else {
			result = false;
			break;
		}
	}

	cout << (result ? "YES" : "NO");
}