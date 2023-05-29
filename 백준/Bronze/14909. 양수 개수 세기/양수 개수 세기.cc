#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int result = 0, num;
	while (cin >> num) 
		if (num > 0) result++;
	cout << result;
}