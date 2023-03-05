#include <iostream>

using namespace std;

int main() {
    int num;
	cin >> num;

	cout << char('a' + --num % 8) << num / 8 + 1;
}