#include <iostream>

using namespace std;

int main() {
	int pos=0, result=0;
	string s;
	cin >> s;

	while (s.find("DKSH", pos) != string::npos) {
		result++;
		pos = s.find("DKSH", pos)+1;
	}

	cout << result;
}