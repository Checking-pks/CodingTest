#include <iostream>

using namespace std;

int main() {
	string s1, s2;
	cin >> s1 >> s2;

	for (int i=0; i<s1.length(); i++)
		cout << max(s1[i], s2[i]);
}