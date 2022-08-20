#include <iostream>

using namespace std;

int main() {
    double shield, ratio;
	cin >> shield >> ratio;

	cout << (shield * (100 - ratio) / 100 < 100);
}