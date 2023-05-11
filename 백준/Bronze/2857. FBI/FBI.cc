#include <iostream>

using namespace std;

int main() {
	bool isFind = false;
	
	for (int i=1; i<=5; i++) {
		string str;
		cin >> str;

		if (str.find("FBI") != string::npos) {
			cout << i << " ";
			isFind = true;
		}
	}

	if (!isFind) cout << "HE GOT AWAY!";
}