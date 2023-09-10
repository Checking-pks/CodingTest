#include <iostream>

using namespace std;

int main() {
	string str = "WelcomeToSMUPC";
	int num;
	cin >> num;

	cout << str[--num%str.length()];
}