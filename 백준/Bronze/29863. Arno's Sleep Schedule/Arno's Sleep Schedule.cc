#include <iostream>

using namespace std;

int main() {
	int s, w;
	cin >> s >> w;
	w -= s;
	if (w < 0) w += 24;
	cout << w;
}