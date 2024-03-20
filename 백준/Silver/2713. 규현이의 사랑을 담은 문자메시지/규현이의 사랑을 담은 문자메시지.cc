#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> moveList = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
vector<vector<bool>> field, visit;

void init() {
	for (int i=0; i<visit.size(); i++) {
		visit[i].front() = true;
		visit[i].back() = true;
	}

	for (int i=0; i<visit[0].size(); i++) {
		visit.front()[i] = true;
		visit.back()[i] = true;
	}
}

string toBinary(int n) {
	string result = "";
	if (n < 0) n = 0;
	while (n) {
		result = (n&1 ? '1' : '0') + result;
		n >>= 1;
	}
	result = string(5 - result.length(), '0') + result;
	return result;
}

string encryption(string s) {
	string result = "";
	for (char c:s) {
		result += toBinary(c-'A'+1);
	}
	return result;
}

void solve(string s) {
	init();
	string binary = encryption(s);
	for (int i=0, x=1, y=1, rot=0; i<binary.length(); i++) {
		field[x][y] = binary[i] == '1';
		visit[x][y] = true;

		int nextX = x + moveList[rot%4][0];
		int nextY = y + moveList[rot%4][1];
		
		if (visit[nextX][nextY]) {
			rot++;
			nextX = x + moveList[rot%4][0];
			nextY = y + moveList[rot%4][1];
		}

		x = nextX;
		y = nextY;
	}
}

void output() {
	for (int i=1; i<field.size()-1; i++) 
		for (int j=1; j<field[i].size()-1; j++) 
			cout << field[i][j];
	cout << "\n";
}

int main() {
	int T, R, C;
	string message;
	cin >> T;

	while (T--) {
		cin >> R >> C;
		getline(cin, message, '\n');
		message = message.substr(1);

		field = visit = vector<vector<bool>>(R+2, vector<bool>(C+2));
		solve(message);
		output();
	}
}