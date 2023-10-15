#include <iostream>

using namespace std;

int main() {
	string game1, game2;
	cin >> game1 >> game2;

	int a1 = game1[0] - '0';
	int b1 = game1[2] - '0';
	int b2 = game2[0] - '0';
	int a2 = game2[2] - '0';

	if (a1 >= b2 && b1 >= a2) cout << "YES";
	else cout << "NO";
}