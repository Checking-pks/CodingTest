#include <iostream>

using namespace std;

int main() {
	int joi = 0, ioi = 0;
	string str;
	cin >> str;

	for (int i=0; i<str.length()-2; i++) {
		string now = str.substr(i, 3);

		joi += (now == "JOI");
		ioi += (now == "IOI");
	}

	cout << joi << "\n" << ioi;
}