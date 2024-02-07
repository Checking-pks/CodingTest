#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int Q;
	cin >> Q;

	int paradox = 0, gotNum = 0;
	long long minNum = -1000000000000000001, maxNum = 1000000000000000001, x;
	for (int i=1; i<=Q; i++) {
		char c;
		cin >> x >> c;

		if (paradox) continue;

		if (c == '^') minNum = max(minNum, x);
		if (c == 'v') maxNum = min(maxNum, x);

		if (maxNum-1 <= minNum)
			paradox = i;

		if (gotNum) continue;

		if (maxNum - minNum == 2) 
			gotNum = i;
	}

	if (paradox) 
		cout << "Paradox!\n" << paradox;
	else if (gotNum)
		cout << "I got it!\n" << gotNum;
	else
		cout << "Hmm...";
}