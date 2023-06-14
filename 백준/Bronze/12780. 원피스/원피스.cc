#include <iostream>

using namespace std;

int main() {
	int result = 0;
	string str, target;
	cin >> str >> target;

	for (int i=0; str.find(target, i) != -1; result++) 
		i = str.find(target, i) + 1;

	cout << result;
}