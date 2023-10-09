#include <iostream>

using namespace std;

int main() {
	int result[10] = {1, 2, 2, 3, 3, 3, 2, 2, 1, 1};
	int n;
	cin >> n;
	cout << result[n-1];
}