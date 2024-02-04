#include <iostream>

using namespace std;

int main() {
	int N, K;
	string s;
	cin >> N >> K;
	cin >> s;
	
	int row=0, col=0;
	for (int j=0; j<min(N, K); j++) {
		for (int i=0; i<s.length(); i++) {
			row += (s[i] == 'U') - (s[i] == 'D');
			col += (s[i] == 'L') - (s[i] == 'R');
	
			if (row==0 && col==0) break;
		}
	}

	if (row==0 && col==0) cout << "YES";
	else cout << "NO";
}