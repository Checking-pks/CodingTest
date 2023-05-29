#include <iostream>

using namespace std;

int main() {
	int result = 0, num;
	while (cin >> num) 
		if (num > 0) result++;
	cout << result;
}