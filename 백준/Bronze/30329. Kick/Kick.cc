#include <iostream>

using namespace std;

int main() {
	int result=0, pos=0;
	string s;
	cin >> s;

	while (s.find("kick", pos) != string::npos) {
		pos = s.find("kick", pos) + 3;
		result++;
	}

	cout << result;
}