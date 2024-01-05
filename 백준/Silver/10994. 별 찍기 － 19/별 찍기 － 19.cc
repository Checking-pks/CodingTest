#include <iostream>
#include <vector>

using namespace std;

vector<vector<bool>> field;

void takingStar(int n, int k) {
	if (k <= 0) return;

	int length = (2*k-1) + 2*(k-1);
	int start = 2*(n-k);
	int end = start+length-1;

	for (int i=0; i<length; i++) {
		field[start][start+i] = true;
		field[start+i][start] = true;
		field[end][start+i] = true;
		field[start+i][end] = true;
	}

	takingStar(n, k-1);
}

int main() {
	int n;
	cin >> n;
	int length = (2*n-1) + 2*(n-1);
	field = vector<vector<bool>>(length, vector<bool>(length));

	takingStar(n, n);

	for (int i=0; i<length; i++) {
		for (int j=0; j<length; j++) 
			cout << (field[i][j] ? '*' : ' ');
		cout << "\n";
	}
}