#include <iostream>

using namespace std;

int main() {
	int count = 0;
	string str;
	while (getline(cin, str)) count++;
	cout << count;
}