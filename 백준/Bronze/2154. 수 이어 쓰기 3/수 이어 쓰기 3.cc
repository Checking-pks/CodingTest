#include <iostream>

using namespace std;

int main() {
	int num;
	string str = "";

	cin >> num;

	for (int i=1; i<=num; i++) 
		str += to_string(i);

	cout << str.find(to_string(num)) + 1;
}