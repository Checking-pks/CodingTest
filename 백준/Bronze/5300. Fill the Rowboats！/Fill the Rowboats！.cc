#include <iostream>

using namespace std;

int main() {
	int num;
	cin >> num;

	for (int i=1; i<=num; i++) 
		cout << i << ((i % 6 == 0) ? " Go! " : " ");

	cout << ((num % 6 != 0) ? "Go!" : "");
}