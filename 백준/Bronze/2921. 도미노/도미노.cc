#include <iostream>

using namespace std;

int main() {
	int num, result = 0;
	cin >> num;

	num++;
	
	while (num--) 
		result += num * (num + 1) / 2 + num * (num + 1);

	cout << result;
}