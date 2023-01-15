#include <iostream>

using namespace std;

int main() {
	int testcase;
	cin >> testcase;

	for (int i=0; i<testcase; i++) {
	    int r, c;
	    cin >> r >> c;
	    cout << r*c/2 << "\n";
	}
}