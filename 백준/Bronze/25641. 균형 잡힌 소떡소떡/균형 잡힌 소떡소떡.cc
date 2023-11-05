#include <iostream>

using namespace std;

int main() {
	int num, s=0, t=0;
	string skewer;
	cin >> num >> skewer;
	
	for (char c:skewer) {
		if (c=='s') s++;
		if (c=='t') t++;
	}

	for (char c:skewer) {
		if (s==t) break;
		if (c=='s') s--;
		if (c=='t') t--;
	}

	cout << skewer.substr(num-s-t);
}