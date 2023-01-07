#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	int num;
	cin >> num;

	for (int i=0; i<num; i++) {
		string str;
		cin >> str;

		str.erase(unique(str.begin(), str.end()), str.end());
		cout << str << "\n";
	}
}