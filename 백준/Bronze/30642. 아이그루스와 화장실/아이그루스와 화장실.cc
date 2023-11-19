#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n, pos;
	string s;
	cin >> n >> s >> pos;

	if (s[0] == 'a') {
		if (pos&1) cout << pos;
		else if (pos == n) cout << pos-1;
		else cout << pos+1;
	} else {
		if ((pos&1) == 0) cout << pos;
		else if (pos == n) cout << pos-1;
		else cout << pos+1;
	}
}