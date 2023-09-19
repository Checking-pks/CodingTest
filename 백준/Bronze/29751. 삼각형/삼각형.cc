#include <iostream>

using namespace std;

int main() {
	int w,h;
	cin >> w >> h;
	w *= h;
	cout << w/2 << (w&1 ? ".5" : ".0");
}