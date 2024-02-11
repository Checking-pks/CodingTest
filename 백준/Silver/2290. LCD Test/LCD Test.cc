#include <iostream>
#include <vector>

using namespace std;

int s;
vector<vector<char>> field;

void typing(int n, char c) {
	int pos = (n ? (s+3)*n : 0);
	for (int i=0; i<s; i++) {
		switch(c) {
			case '0':
				field[0][pos+1+i] = '-';
				field[2*s+2][pos+1+i] = '-';
				field[1+i] [pos] = '|';
				field[1+i] [pos+s+1] = '|';
				field[s+2+i][pos] = '|';
				field[s+2+i][pos+s+1] = '|';
				break;
			case '1':
				field[1+i] [pos+s+1] = '|';
				field[s+2+i][pos+s+1] = '|';
				break;
			case '2':
				field[0] [pos+1+i] = '-';
				field[s+1] [pos+1+i] = '-';
				field[2*s+2][pos+1+i] = '-';
				field[1+i] [pos+s+1] = '|';
				field[s+2+i][pos] = '|';
				break;
			case '3':
				field[0] [pos+1+i] = '-';
				field[s+1] [pos+1+i] = '-';
				field[2*s+2][pos+1+i] = '-';
				field[1+i] [pos+s+1] = '|';
				field[s+2+i][pos+s+1] = '|';
				break;
			case '4':
				field[s+1] [pos+1+i] = '-';
				field[1+i] [pos] = '|';
				field[1+i] [pos+s+1] = '|';
				field[s+2+i][pos+s+1] = '|';
				break;
			case '5':
				field[0] [pos+1+i] = '-';
				field[s+1] [pos+1+i] = '-';
				field[2*s+2][pos+1+i] = '-';
				field[1+i] [pos] = '|';
				field[s+2+i][pos+s+1] = '|';
				break;
			case '6':
				field[0] [pos+1+i] = '-';
				field[s+1] [pos+1+i] = '-';
				field[2*s+2][pos+1+i] = '-';
				field[1+i] [pos] = '|';
				field[s+2+i][pos] = '|';
				field[s+2+i][pos+s+1] = '|';
				break;
			case '7':
				field[0] [pos+1+i] = '-';
				field[1+i] [pos+s+1] = '|';
				field[s+2+i][pos+s+1] = '|';
				break;
			case '8':
				field[0] [pos+1+i] = '-';
				field[s+1] [pos+1+i] = '-';
				field[2*s+2][pos+1+i] = '-';
				field[1+i] [pos] = '|';
				field[1+i] [pos+s+1] = '|';
				field[s+2+i][pos] = '|';
				field[s+2+i][pos+s+1] = '|';
				break;
			case '9':
				field[0] [pos+1+i] = '-';
				field[s+1] [pos+1+i] = '-';
				field[2*s+2][pos+1+i] = '-';
				field[1+i] [pos] = '|';
				field[1+i] [pos+s+1] = '|';
				field[s+2+i][pos+s+1] = '|';
				break;
		}
	}
}

int main() {
	string n;
	cin >> s >> n;

	field = vector<vector<char>>(2*s+3, vector<char>((s+3)*n.length(), ' '));
	for (int i=0; i<n.length(); i++) 
		typing(i, n[i]);

	for (int i=0; i<field.size(); i++) {
		for (int j=0; j<field[i].size(); j++) 
			cout << field[i][j];
		cout << "\n";
	}
}